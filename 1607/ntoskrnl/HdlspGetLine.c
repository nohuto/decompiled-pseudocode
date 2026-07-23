/*
 * XREFs of HdlspGetLine @ 0x140723450
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140722CBC (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140722DE0 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x140723BF0 (HdlspPutMore.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x1401530AC (sprintf_s.c)
 *     strcpy_s @ 0x1401531F4 (strcpy_s.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     InbvPortGetByte @ 0x14023DCE4 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x14023DE9C (InbvPortPollOnly.c)
 *     HdlspSendStringAtBaud @ 0x140723F44 (HdlspSendStringAtBaud.c)
 */

char __fastcall HdlspGetLine(void *a1, __int64 Size, __int64 a3, __int64 a4)
{
  PKSPIN_LOCK v4; // rbx
  size_t v5; // rdi
  KIRQL v7; // al
  int v8; // ecx
  char *v10; // rcx
  KSPIN_LOCK v11; // rcx
  KSPIN_LOCK v12; // rax
  KSPIN_LOCK v13; // rax
  char v14; // cl
  KSPIN_LOCK v15; // rcx
  char *v16; // rcx
  __int64 v17; // rax
  size_t v18; // r8
  const void *v19; // rdx
  unsigned __int8 v20; // [rsp+40h] [rbp+18h] BYREF

  v4 = HeadlessGlobals;
  v5 = Size;
  if ( (HeadlessGlobals[6] & 2) != 0 )
  {
    v7 = -1;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v4 = HeadlessGlobals;
  }
  v8 = *((_DWORD *)v4 + 12);
  if ( (v8 & 0x10) != 0 )
  {
    if ( v7 != 0xFF )
      KeReleaseSpinLock(v4, v7);
    return 0;
  }
  else
  {
    *((_DWORD *)v4 + 12) = v8 | 0x10;
    if ( v7 != 0xFF )
    {
      KeReleaseSpinLock(v4, v7);
      v4 = HeadlessGlobals;
    }
    if ( (v4[6] & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( InbvPortPollOnly(*((_DWORD *)v4 + 14), Size, a3, a4)
            && InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), (__int64)&v20, a3) )
          {
            LOBYTE(Size) = v20;
          }
          else
          {
            LOBYTE(Size) = 0;
            v20 = 0;
          }
          if ( !(_BYTE)Size )
            goto LABEL_32;
          v4 = HeadlessGlobals;
          *(_BYTE *)(HeadlessGlobals[4] + HeadlessGlobals[11]) = Size;
          if ( !*((_BYTE *)v4 + 117) || v20 != 10 )
            break;
          *((_BYTE *)v4 + 117) = 0;
        }
        *((_BYTE *)v4 + 117) = v20 == 13;
        if ( v20 == 10 || v20 == 13 )
          break;
        switch ( v20 )
        {
          case 8u:
          case 0x7Fu:
            if ( v4[11] )
            {
              HdlspSendStringAtBaud("\b \b");
              v4 = HeadlessGlobals;
              --HeadlessGlobals[11];
            }
            break;
          case 3u:
            v11 = ++v4[11];
            v12 = v4[4];
            goto LABEL_35;
          case 9u:
          case 0x1Bu:
            HdlspSendStringAtBaud("\a");
LABEL_32:
            *((_DWORD *)HeadlessGlobals + 12) &= ~0x10u;
            return 0;
          default:
            v10 = (char *)v4[3];
            if ( v4[11] == 78 )
            {
              sprintf_s(v10, 0x50uLL, "\b%c", v20);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              v4 = HeadlessGlobals;
            }
            else
            {
              sprintf_s(v10, 0x50uLL, "%c", v20);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              v4 = HeadlessGlobals;
              ++HeadlessGlobals[11];
            }
            break;
        }
      }
      HdlspSendStringAtBaud("\r\n");
      v4 = HeadlessGlobals;
      v11 = HeadlessGlobals[4];
      v12 = HeadlessGlobals[11];
LABEL_35:
      *(_BYTE *)(v11 + v12) = 0;
      v13 = v4[11]++;
      if ( v4[11] != 1 )
      {
        do
        {
          v14 = *(_BYTE *)(v4[4] + v13);
          if ( v14 && v14 != 32 && v14 != 9 )
            break;
          --v13;
        }
        while ( v13 );
      }
      v15 = v4[4];
      if ( *(_BYTE *)(v15 + v13) )
        *(_BYTE *)(v15 + v13 + 1) = 0;
      v16 = (char *)v4[4];
      v17 = 0LL;
      if ( *v16 )
      {
        do
        {
          if ( v16[v17] != 9 && v16[v17] != 32 )
            break;
          ++v17;
        }
        while ( v16[v17] );
        if ( v17 )
        {
          strcpy_s(v16, 0x50uLL, &v16[v17]);
          v4 = HeadlessGlobals;
        }
      }
    }
    v18 = v4[11];
    v19 = (const void *)v4[4];
    if ( v5 < v18 )
    {
      memmove(a1, v19, v5);
      memmove((void *)v4[4], (const void *)(v4[4] + v5), v4[11] - v5);
      *((_DWORD *)v4 + 12) |= 0x20u;
      v4[11] -= v5;
    }
    else
    {
      memmove(a1, v19, v18);
      v4[11] = 0LL;
      *((_DWORD *)v4 + 12) &= ~0x20u;
    }
    *((_DWORD *)v4 + 12) &= ~0x10u;
    return 1;
  }
}
