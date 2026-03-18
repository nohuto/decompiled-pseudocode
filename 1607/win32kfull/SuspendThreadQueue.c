/*
 * XREFs of SuspendThreadQueue @ 0x1C01142D0
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     UnlinkSendListSms @ 0x1C0058070 (UnlinkSendListSms.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     RemoveSMSReceiveList @ 0x1C007F5F4 (RemoveSMSReceiveList.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00FDF30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxReceiverDied @ 0x1C01067A8 (xxxReceiverDied.c)
 *     CleanInputMessage @ 0x1C0123990 (CleanInputMessage.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbx
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v12; // rbp
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v20; // rdx
  _QWORD *v21; // r8
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = a1;
  v3 = a1;
  if ( (*(_DWORD *)(a1 + 440) & 0x1000001) == 0x1000000 )
  {
    v4 = *(__int64 **)(a1 + 384);
    v5 = *v4;
    if ( *v4 )
    {
      do
      {
        v12 = *(_QWORD *)v5;
        if ( *(_DWORD *)(v5 + 96) == 9 && v5 != v4[6] && v5 != v4[5] && (*(_DWORD *)(v5 + 100) & 0x100) == 0 )
        {
          v18 = *(unsigned int *)(v5 + 24);
          if ( !((unsigned int)v18 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v18] >> 10) & 7) )
          {
            CleanEventMessage((struct tagQMSG *)v5, a2, a3);
            DelQEntry(v4, v5);
          }
        }
        v5 = v12;
      }
      while ( v12 );
      v3 = v22;
    }
    v6 = *(_QWORD *)(v3 + 728);
    if ( v6 )
    {
      do
      {
        v9 = *(_QWORD *)v6;
        if ( v6 != v4[6] && v6 != v4[5] && (*(_DWORD *)(v6 + 100) & 0x100) == 0 )
        {
          v10 = *(unsigned int *)(v6 + 24);
          if ( !((unsigned int)v10 < 0x400 ? ((unsigned __int16)MessageTable[v10] >> 10) & 7 : 1) )
          {
            CleanInputMessage((unsigned int)v10, v6);
            DelQEntry((_QWORD *)(v3 + 728), v6);
          }
        }
        v6 = v9;
      }
      while ( v9 );
      v3 = v22;
    }
    v7 = (_QWORD *)(v3 + 472);
    v8 = *(_QWORD **)(v3 + 472);
    if ( v8 != (_QWORD *)(v3 + 472) )
    {
      do
      {
        v13 = (__int64)(v8 - 2);
        v8 = (_QWORD *)*v8;
        if ( !*(_QWORD *)(v13 + 64) )
        {
          v14 = *(_DWORD *)(v13 + 84);
          if ( (v14 & 0x4000) == 0 )
          {
            v15 = *(_QWORD *)(v13 + 32);
            if ( v15 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(v3 + 376), **(_QWORD **)(v15 + 376)) )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
                xxxReceiverDied(v13, v20, v21);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
              }
            }
            else if ( (v14 & 8) != 0 )
            {
              v16 = *(unsigned int *)(v13 + 104);
              if ( !((unsigned int)v16 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v16] >> 10) & 7) )
              {
                RemoveSMSReceiveList(v13, v3);
                if ( (_QWORD *)*v7 == v7 )
                {
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 400LL) + 6LL) &= ~0x40u;
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 400LL) + 4LL) &= ~0x40u;
                }
                UnlinkSendListSms((__int64 *)v13);
              }
            }
          }
        }
      }
      while ( v8 != v7 );
    }
    *(_DWORD *)(v3 + 1096) |= 0x20u;
  }
}
