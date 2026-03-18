/*
 * XREFs of xxxSendMenuSelect @ 0x14012018C
 * Callers:
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 * Callees:
 *     xxxCallMsgFilter @ 0x14002004C (xxxCallMsgFilter.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140032BC8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1401203C8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 */

_QWORD *__fastcall xxxSendMenuSelect(struct tagWND *a1, struct tagWND *a2, __int64 **a3, int a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 *v9; // rdi
  __int64 **v10; // rax
  __int64 *v11; // r14
  unsigned int v12; // ebx
  int v13; // r14d
  unsigned int v15; // ebx
  __int64 v16; // rdx
  _DWORD *v17; // r14
  int v18; // ebx
  int v19; // ecx
  __int64 v20[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v21; // [rsp+48h] [rbp-11h]
  __int64 v22[3]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v23; // [rsp+68h] [rbp+Fh] BYREF
  int v24; // [rsp+70h] [rbp+17h]
  int v25; // [rsp+74h] [rbp+1Bh]
  unsigned __int64 v26; // [rsp+78h] [rbp+1Fh]
  struct _LARGE_STRING *v27; // [rsp+80h] [rbp+27h]
  __int128 v28; // [rsp+88h] [rbp+2Fh]

  v6 = a4;
  v25 = 0;
  v28 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v20, a3);
  if ( (int)v6 < 0 || *(_DWORD *)(*(_QWORD *)(**a3 + 40) + 44LL) <= (unsigned int)v6 )
  {
    v9 = a3[2];
    if ( !v9 )
      v9 = (__int64 *)**a3;
    v10 = (__int64 **)SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v22, -1);
    v11 = v10[2];
    if ( !v11 )
      v11 = (__int64 *)**v10;
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v22);
    v12 = 0xFFFF;
    v21 = 0LL;
    if ( v9 != v11 )
      v12 = 0;
    LOWORD(v13) = 0;
    if ( *(_QWORD *)v20[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v20);
      v20[0] = gSmartObjNullRef;
    }
    LODWORD(v6) = -1;
  }
  else
  {
    v16 = *(_QWORD *)(**a3 + 88);
    v17 = *(_DWORD **)(v16 + 96 * v6);
    v18 = *v17 & 0x6B64 | v17[1] & 0x8B | 0x10;
    if ( !*(_QWORD *)(v16 + 96 * v6 + 16) )
      v18 = *v17 & 0x6B64 | v17[1] & 0x8B;
    v12 = v18 & 0xFFFF5FFF;
    if ( (v12 & 0x10) != 0 )
      LOWORD(v13) = v6;
    else
      v13 = v17[2];
    if ( a5 )
    {
      v19 = v12 | 0x8000;
      if ( *(_DWORD *)(a5 + 20) != -1 )
        v19 = v12;
      v12 = v19;
      if ( (*(_DWORD *)(a5 + 8) & 2) != 0 )
        v12 = v19 | 0x2000;
    }
  }
  if ( a1 )
    v23 = *(_QWORD *)a1;
  else
    v23 = 0LL;
  v24 = 287;
  v26 = (unsigned __int16)v13 | (unsigned __int64)(v12 << 16);
  if ( v21 || *(_QWORD *)v20[0] )
    v27 = **(struct _LARGE_STRING ***)v20[0];
  else
    v27 = 0LL;
  if ( !(unsigned int)xxxCallMsgFilter((__int64)&v23, 2) )
    xxxSendNotifyMessage(a1, 0x11Fu, v26, v27, 1);
  if ( a2 )
  {
    if ( a2 == a1 )
      v15 = (v12 >> 12) | 0xFFFFFFFD;
    else
      v15 = -4;
    xxxWindowEvent(0x8005u, a2, v15, v6 + 1, 0);
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v20);
}
