/*
 * XREFs of SuspendThreadQueue @ 0x1C00E77B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxReceiverDied @ 0x1C007B2C4 (xxxReceiverDied.c)
 *     UnlinkSendListSms @ 0x1C007B368 (UnlinkSendListSms.c)
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D98E0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     CleanInputMessage @ 0x1C00FB5B0 (CleanInputMessage.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 **v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rbx
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v16; // rbp
  __int64 v17; // rax
  __int64 v19; // r9
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rcx
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v24 = a1;
  v3 = a1;
  if ( (*(_DWORD *)(a1 + 448) & 0x1000001) == 0x1000000 )
  {
    v4 = *(__int64 ***)(a1 + 392);
    v5 = *v4;
    if ( *v4 )
    {
      do
      {
        v16 = (__int64 *)*v5;
        if ( *((_DWORD *)v5 + 22) == 9 && v5 != v4[5] && v5 != v4[4] && (*((_DWORD *)v5 + 23) & 0x100) == 0 )
        {
          v17 = *((unsigned int *)v5 + 6);
          if ( !((unsigned int)v17 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v17] >> 10) & 7) )
          {
            CleanEventMessage((struct tagQMSG *)v5);
            DelQEntry((__int64)v4, v5, 1LL, v19);
          }
        }
        v5 = v16;
      }
      while ( v16 );
      v3 = v24;
    }
    v6 = *(_QWORD *)(v3 + 736);
    if ( v6 )
    {
      do
      {
        v9 = *(_QWORD *)v6;
        if ( (__int64 *)v6 != v4[5] && (__int64 *)v6 != v4[4] && (*(_DWORD *)(v6 + 92) & 0x100) == 0 )
        {
          a3 = *(unsigned int *)(v6 + 24);
          if ( !((unsigned int)a3 < 0x400 ? ((unsigned __int16)MessageTable[a3] >> 10) & 7 : 1) )
          {
            CleanInputMessage((unsigned int)a3, v6);
            DelQEntry(v3 + 736, (__int64 *)v6, 1LL, v20);
          }
        }
        v6 = v9;
      }
      while ( v9 );
      v3 = v24;
    }
    v7 = (_QWORD *)(v3 + 480);
    v8 = *(_QWORD **)(v3 + 480);
    if ( v8 != (_QWORD *)(v3 + 480) )
    {
      do
      {
        v11 = (__int64)(v8 - 2);
        v8 = (_QWORD *)*v8;
        if ( !*(_QWORD *)(v11 + 64) )
        {
          v12 = *(_DWORD *)(v11 + 84);
          if ( (v12 & 0x4000) == 0 )
          {
            v13 = *(_QWORD *)(v11 + 32);
            if ( v13 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(v3 + 384), **(_QWORD **)(v13 + 384)) )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v24);
                xxxReceiverDied(v11);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v24);
              }
            }
            else if ( (v12 & 8) != 0 )
            {
              v14 = *(unsigned int *)(v11 + 104);
              if ( !((unsigned int)v14 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v14] >> 10) & 7) )
              {
                --*(_DWORD *)(v3 + 496);
                v21 = (_QWORD *)(v11 + 16);
                v22 = *(_QWORD *)(v11 + 16);
                v23 = *(__int64 **)(v11 + 24);
                if ( *(_QWORD *)(v22 + 8) != v11 + 16 || (_QWORD *)*v23 != v21 )
                  __fastfail(3u);
                *v23 = v22;
                *(_QWORD *)(v22 + 8) = v23;
                *v21 = 0LL;
                if ( (_QWORD *)*v7 == v7 )
                {
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 408LL) + 6LL) &= ~0x40u;
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 408LL) + 4LL) &= ~0x40u;
                }
                UnlinkSendListSms((__int64 *)v11, v22, a3);
              }
            }
          }
        }
      }
      while ( v8 != v7 );
    }
    *(_DWORD *)(v3 + 1080) |= 0x20u;
  }
}
