/*
 * XREFs of HdlspGetLine @ 0x14075A4F4
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140759D1C (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140759E40 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x14075ADD4 (HdlspPutMore.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     sprintf_s @ 0x1401777DC (sprintf_s.c)
 *     strcpy_s @ 0x140177924 (strcpy_s.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     InbvPortGetByte @ 0x140272248 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x1402723FC (InbvPortPollOnly.c)
 *     HdlspSendStringAtBaud @ 0x14075B128 (HdlspSendStringAtBaud.c)
 */

char __fastcall HdlspGetLine(void *a1, __int64 Size, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  size_t v6; // rbp
  unsigned __int8 CurrentIrql; // si
  int v8; // eax
  __int64 v10; // rax
  char *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // cl
  __int64 v16; // rcx
  char *v17; // rcx
  __int64 v18; // rax
  size_t v19; // r8
  const void *v20; // rdx
  _DWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int8 v24; // [rsp+50h] [rbp+18h] BYREF

  v4 = HeadlessGlobals;
  v6 = Size;
  if ( (*(_DWORD *)(HeadlessGlobals + 48) & 2) != 0 )
  {
    CurrentIrql = -1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)v4);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v4);
    }
    v4 = HeadlessGlobals;
  }
  v8 = *(_DWORD *)(v4 + 48);
  if ( (v8 & 0x10) != 0 )
  {
    if ( CurrentIrql != 0xFF )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)v4, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
      __writecr8(CurrentIrql);
    }
    return 0;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = v8 | 0x10;
    if ( CurrentIrql != 0xFF )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)v4, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
      __writecr8(CurrentIrql);
      v4 = HeadlessGlobals;
    }
    if ( (*(_DWORD *)(v4 + 48) & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( InbvPortPollOnly(*(_DWORD *)(v4 + 56), Size, a3, a4)
            && InbvPortGetByte(*(_DWORD *)(HeadlessGlobals + 56), (__int64)&v24, a3) )
          {
            LOBYTE(Size) = v24;
          }
          else
          {
            LOBYTE(Size) = 0;
            v24 = 0;
          }
          v10 = HeadlessGlobals;
          if ( !(_BYTE)Size )
            goto LABEL_42;
          *(_BYTE *)(*(_QWORD *)(HeadlessGlobals + 88) + *(_QWORD *)(HeadlessGlobals + 32)) = Size;
          v4 = HeadlessGlobals;
          if ( !*(_BYTE *)(HeadlessGlobals + 117) || v24 != 10 )
            break;
          *(_BYTE *)(HeadlessGlobals + 117) = 0;
        }
        *(_BYTE *)(HeadlessGlobals + 117) = v24 == 13;
        if ( v24 == 10 || v24 == 13 )
          break;
        switch ( v24 )
        {
          case 8u:
          case 0x7Fu:
            if ( *(_QWORD *)(v4 + 88) )
            {
              HdlspSendStringAtBaud("\b \b");
              v4 = HeadlessGlobals;
              --*(_QWORD *)(HeadlessGlobals + 88);
            }
            break;
          case 3u:
            v12 = ++*(_QWORD *)(v4 + 88);
            v13 = *(_QWORD *)(v4 + 32);
            goto LABEL_45;
          case 9u:
          case 0x1Bu:
            HdlspSendStringAtBaud("\a");
            v10 = HeadlessGlobals;
LABEL_42:
            *(_DWORD *)(v10 + 48) &= ~0x10u;
            return 0;
          default:
            v11 = *(char **)(v4 + 24);
            if ( *(_QWORD *)(v4 + 88) == 78LL )
            {
              sprintf_s(v11, 0x50uLL, "\b%c", v24);
              HdlspSendStringAtBaud(*(_QWORD *)(HeadlessGlobals + 24));
              v4 = HeadlessGlobals;
            }
            else
            {
              sprintf_s(v11, 0x50uLL, "%c", v24);
              HdlspSendStringAtBaud(*(_QWORD *)(HeadlessGlobals + 24));
              v4 = HeadlessGlobals;
              ++*(_QWORD *)(HeadlessGlobals + 88);
            }
            break;
        }
      }
      HdlspSendStringAtBaud("\r\n");
      v12 = *(_QWORD *)(HeadlessGlobals + 88);
      v13 = *(_QWORD *)(HeadlessGlobals + 32);
LABEL_45:
      *(_BYTE *)(v12 + v13) = 0;
      v4 = HeadlessGlobals;
      ++*(_QWORD *)(HeadlessGlobals + 88);
      v14 = *(_QWORD *)(v4 + 88) - 1LL;
      if ( *(_QWORD *)(v4 + 88) != 1LL )
      {
        do
        {
          v15 = *(_BYTE *)(*(_QWORD *)(v4 + 32) + v14);
          if ( v15 && v15 != 32 && v15 != 9 )
            break;
          --v14;
        }
        while ( v14 );
      }
      v16 = *(_QWORD *)(v4 + 32);
      if ( *(_BYTE *)(v16 + v14) )
      {
        *(_BYTE *)(v16 + v14 + 1) = 0;
        v4 = HeadlessGlobals;
      }
      v17 = *(char **)(v4 + 32);
      v18 = 0LL;
      if ( *v17 )
      {
        do
        {
          if ( v17[v18] != 9 && v17[v18] != 32 )
            break;
          ++v18;
        }
        while ( v17[v18] );
        if ( v18 )
        {
          strcpy_s(v17, 0x50uLL, &v17[v18]);
          v4 = HeadlessGlobals;
        }
      }
    }
    v19 = *(_QWORD *)(v4 + 88);
    v20 = *(const void **)(v4 + 32);
    if ( v6 < v19 )
    {
      memmove(a1, v20, v6);
      memmove(*(void **)(v4 + 32), (const void *)(*(_QWORD *)(v4 + 32) + v6), *(_QWORD *)(v4 + 88) - v6);
      v22 = HeadlessGlobals;
      v21 = (_DWORD *)(HeadlessGlobals + 48);
      *(_DWORD *)(HeadlessGlobals + 48) |= 0x20u;
      *(_QWORD *)(v22 + 88) -= v6;
    }
    else
    {
      memmove(a1, v20, v19);
      *(_QWORD *)(v4 + 88) = 0LL;
      v21 = (_DWORD *)(v4 + 48);
      *v21 &= ~0x20u;
    }
    *v21 &= ~0x10u;
    return 1;
  }
}
