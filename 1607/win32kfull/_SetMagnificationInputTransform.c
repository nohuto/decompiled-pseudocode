/*
 * XREFs of _SetMagnificationInputTransform @ 0x1C00EFCE8
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 *     MagpRevokeInputTransfrom @ 0x1C00EFCB0 (MagpRevokeInputTransfrom.c)
 *     FreeDesktop @ 0x1C0132F10 (FreeDesktop.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01F4CA0 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     AcquireMagInputLock @ 0x1C000D61C (AcquireMagInputLock.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x1C01FAE4C (-ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01FAEC0 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall SetMagnificationInputTransform(__int128 *a1)
{
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // [rsp+20h] [rbp-30h] BYREF
  __int128 v24; // [rsp+30h] [rbp-20h]
  __int128 v25; // [rsp+40h] [rbp-10h]

  v2 = *((_DWORD *)a1 + 8);
  v3 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( !v2 )
  {
    if ( !*(_QWORD *)(v3 + 208) )
    {
      if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
        return 0LL;
      v18 = *a1;
      *(_QWORD *)&v25 = gptiCurrent;
      v19 = a1[1];
      v23 = v18;
      v24 = v19;
      ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v23);
      AcquireMagInputLock();
      v20 = (_OWORD *)Win32AllocPool(48LL, 1735226197LL);
      *(_QWORD *)(v3 + 208) = v20;
      if ( !v20 )
      {
        UserSetLastError(14LL);
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        return 0LL;
      }
      v9 = 804LL;
      v21 = v24;
      *v20 = v23;
      v22 = v25;
      v20[1] = v21;
      v20[2] = v22;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  if ( v2 <= 0 )
    goto LABEL_7;
  if ( v2 > 2 )
  {
    if ( v2 == 3 )
    {
      v4 = *(_QWORD *)(v3 + 208);
      if ( !v4 )
        return 0LL;
      if ( gptiCurrent == *(_QWORD *)(v4 + 32) || gptiCurrent == gptiRit )
      {
        AcquireMagInputLock();
        Win32FreePool(*(_QWORD *)(v3 + 208), v7, v8);
        v9 = 805LL;
        *(_QWORD *)(v3 + 208) = 0LL;
LABEL_24:
        _InterlockedExchange64(&gpMagInputLock, 0LL);
        PostMessage(-1LL, v9, 0LL, 0LL);
        return 1LL;
      }
      goto LABEL_21;
    }
LABEL_7:
    v6 = 87LL;
LABEL_22:
    UserSetLastError(v6);
    return 0LL;
  }
  v10 = *(_QWORD *)(v3 + 208);
  if ( !v10 )
    goto LABEL_7;
  if ( gptiCurrent != *(_QWORD *)(v10 + 32) )
  {
LABEL_21:
    v6 = 5LL;
    goto LABEL_22;
  }
  if ( !(unsigned int)VerifyMagInputDimensions((struct _MAGN_INPUT_TRANSFORM *)a1) )
    return 0LL;
  v11 = *((_DWORD *)a1 + 8) == 1;
  v12 = *(_QWORD *)(v3 + 208);
  v13 = *(_OWORD *)(v12 + 32);
  v24 = *(_OWORD *)(v12 + 16);
  v14 = *a1;
  v25 = v13;
  v23 = v14;
  if ( v11 )
    v24 = a1[1];
  ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v23);
  AcquireMagInputLock();
  v15 = *(_OWORD **)(v3 + 208);
  v16 = v24;
  *v15 = v23;
  v17 = v25;
  v15[1] = v16;
  v15[2] = v17;
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}
