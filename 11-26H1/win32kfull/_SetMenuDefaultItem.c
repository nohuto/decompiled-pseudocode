/*
 * XREFs of _SetMenuDefaultItem @ 0x14000F3B0
 * Callers:
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14000F33C (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     NtUserSetMenuDefaultItem @ 0x140224710 (NtUserSetMenuDefaultItem.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall SetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  _QWORD v16[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v16);
  v6 = 0;
  v18 = 0LL;
  if ( a2 == -1 )
  {
    v10 = 0LL;
LABEL_11:
    v11 = *(_QWORD *)(a1 + 88);
    v12 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 44LL);
    if ( (_DWORD)v12 )
    {
      do
      {
        v13 = *(_DWORD *)(*(_QWORD *)v11 + 4LL);
        if ( (v13 & 0x1000) != 0 && v11 != v10 )
        {
          *(_DWORD *)(*(_QWORD *)v11 + 4LL) = v13 & 0xFFFFEFFF;
          *(_DWORD *)(*(_QWORD *)v11 + 84LL) = 0x7FFFFFFF;
          *(_DWORD *)(*(_QWORD *)v11 + 88LL) = 0;
        }
        v11 += 96LL;
        --v12;
      }
      while ( v12 );
    }
    if ( a2 != -1 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)v10 + 4LL);
      if ( (v14 & 0x1000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)v10 + 4LL) = v14 | 0x1000;
        *(_DWORD *)(*(_QWORD *)v10 + 84LL) = 0x7FFFFFFF;
        *(_DWORD *)(*(_QWORD *)v10 + 88LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x400u;
      }
    }
    v6 = 1;
    goto LABEL_18;
  }
  v7 = v17;
  if ( !v17 )
    v7 = *(_QWORD *)v16[0];
  v18 = v7;
  v8 = MNLookUpItem(a1, a2, a3, &v18);
  v9 = v18;
  v10 = v8;
  v17 = 0LL;
  if ( v18 != *(_QWORD *)v16[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v16);
    if ( v9 )
    {
      v16[0] = *(_QWORD *)(v9 + 152);
      ++*(_DWORD *)(v16[0] + 8LL);
    }
    else
    {
      v16[0] = gSmartObjNullRef;
    }
  }
  if ( v10 )
  {
    if ( v17 )
    {
      if ( v17 != a1 )
        goto LABEL_18;
    }
    else if ( *(_QWORD *)v16[0] != a1 )
    {
      goto LABEL_18;
    }
    if ( (**(_DWORD **)v10 & 0x800) != 0 )
      goto LABEL_18;
    goto LABEL_11;
  }
LABEL_18:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v16);
  return v6;
}
