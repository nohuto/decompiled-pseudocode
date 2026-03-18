/*
 * XREFs of EditionQueryInertiaWorker @ 0x14023C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008DB28 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1401F1248 (-DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1402A08EC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EditionQueryInertiaWorker(struct tagPOINT a1, __int64 a2)
{
  __int64 v4; // rsi
  _DWORD *v5; // r14
  __int64 v6; // rcx
  unsigned int v7; // edi
  bool v8; // zf
  const struct _D3DMATRIX *v10; // rdx
  const struct tagRECT *v11; // rcx
  struct tagPOINT v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateHwnd(*(_QWORD *)(a2 + 120));
  v5 = (_DWORD *)(a2 + 184);
  v7 = 0;
  if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(v6) && (*v5 & 0x20) != 0 )
  {
    v8 = v4 == 0;
LABEL_4:
    LOBYTE(v7) = !v8;
    return v7;
  }
  if ( (*v5 & 4) != 0 )
  {
    v12 = a1;
    if ( !DCEHitTestWindow((const struct tagRECT *)(a2 + 40), (const struct _D3DMATRIX *)(a2 + 56), &v12, 0LL) )
      return 0LL;
  }
  if ( !v4 || _bittest((const signed __int32 *)(v4 + 380), 0x1Eu) )
  {
    if ( (*v5 & 4) == 0 )
    {
      v12.x = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 158LL);
    }
    if ( !v4 )
      return 1LL;
  }
  if ( _bittest((const signed __int32 *)(v4 + 380), 0x1Eu) )
    return 1LL;
  v10 = *(const struct _D3DMATRIX **)(v4 + 216);
  v11 = (const struct tagRECT *)(*(_QWORD *)(v4 + 40) + 88LL);
  v12 = a1;
  if ( !v10 )
  {
    v8 = !DCEPtInRect(v11, a1);
    goto LABEL_4;
  }
  return DCEHitTestWindow(v11, v10, &v12, 0LL) != 0;
}
