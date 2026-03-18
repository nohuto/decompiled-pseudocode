/*
 * XREFs of SuspendThreadQueue @ 0x1C000D4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     UnlinkSendListSms @ 0x1C0065234 (UnlinkSendListSms.c)
 *     xxxReceiverDied @ 0x1C00D07E4 (xxxReceiverDied.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00DC9C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     CleanInputMessage @ 0x1C01039F0 (CleanInputMessage.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1)
{
  __int64 v1; // rdi
  __int64 **v2; // rsi
  __int64 *v3; // rbx
  __int64 *v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  __int64 *v7; // rbp
  __int64 v8; // r8
  _QWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v15; // rbp
  __int64 v16; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v21 = a1;
  v1 = a1;
  if ( (*(_DWORD *)(a1 + 440) & 0x1000001) == 0x1000000 )
  {
    v2 = *(__int64 ***)(a1 + 384);
    v3 = *v2;
    if ( *v2 )
    {
      do
      {
        v15 = (__int64 *)*v3;
        if ( *((_DWORD *)v3 + 22) == 9 && v3 != v2[5] && v3 != v2[4] && (*((_DWORD *)v3 + 23) & 0x100) == 0 )
        {
          v16 = *((unsigned int *)v3 + 6);
          if ( !((unsigned int)v16 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v16] >> 10) & 7) )
          {
            CleanEventMessage((struct tagQMSG *)v3);
            DelQEntry(v2, v3, 1LL);
          }
        }
        v3 = v15;
      }
      while ( v15 );
      v1 = v21;
    }
    v4 = *(__int64 **)(v1 + 728);
    if ( v4 )
    {
      do
      {
        v7 = (__int64 *)*v4;
        if ( v4 != v2[5] && v4 != v2[4] && (*((_DWORD *)v4 + 23) & 0x100) == 0 )
        {
          v8 = *((unsigned int *)v4 + 6);
          if ( !((unsigned int)v8 < 0x400 ? ((unsigned __int16)MessageTable[v8] >> 10) & 7 : 1) )
          {
            CleanInputMessage((unsigned int)v8, v4);
            DelQEntry(v1 + 728, v4, 1LL);
          }
        }
        v4 = v7;
      }
      while ( v7 );
      v1 = v21;
    }
    v5 = (_QWORD *)(v1 + 472);
    v6 = *(_QWORD **)(v1 + 472);
    if ( v6 != (_QWORD *)(v1 + 472) )
    {
      do
      {
        v10 = v6 - 2;
        v6 = (_QWORD *)*v6;
        if ( !v10[8] )
        {
          v11 = *((_DWORD *)v10 + 21);
          if ( (v11 & 0x4000) == 0 )
          {
            v12 = v10[4];
            if ( v12 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(v1 + 376), **(_QWORD **)(v12 + 376)) )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
                xxxReceiverDied(v10);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21);
              }
            }
            else if ( (v11 & 8) != 0 )
            {
              v13 = *((unsigned int *)v10 + 26);
              if ( !((unsigned int)v13 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v13] >> 10) & 7) )
              {
                --*(_DWORD *)(v1 + 488);
                v18 = v10 + 2;
                v19 = v10[2];
                v20 = (_QWORD *)v10[3];
                if ( *(_QWORD **)(v19 + 8) != v10 + 2 || (_QWORD *)*v20 != v18 )
                  __fastfail(3u);
                *v20 = v19;
                *(_QWORD *)(v19 + 8) = v20;
                *v18 = 0LL;
                if ( (_QWORD *)*v5 == v5 )
                {
                  *(_WORD *)(*(_QWORD *)(v10[5] + 400LL) + 6LL) &= ~0x40u;
                  *(_WORD *)(*(_QWORD *)(v10[5] + 400LL) + 4LL) &= ~0x40u;
                }
                UnlinkSendListSms(v10);
              }
            }
          }
        }
      }
      while ( v6 != v5 );
    }
    *(_DWORD *)(v1 + 1072) |= 0x20u;
  }
}
