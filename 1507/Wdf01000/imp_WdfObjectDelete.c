/*
 * XREFs of imp_WdfObjectDelete @ 0x1C0026D10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qDqD @ 0x1C0079818 (WPP_IFR_SF_qDqD.c)
 */

void __fastcall imp_WdfObjectDelete(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Object)
{
  unsigned __int16 *flags; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  unsigned __int16 v8; // r9
  _FX_DRIVER_GLOBALS *v9; // rsi
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  FxObject **p_pObject; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  int v14; // [rsp+78h] [rbp+10h] BYREF
  FxObject *pObject; // [rsp+80h] [rbp+18h] BYREF

  if ( !Object )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1000uLL);
  flags = (unsigned __int16 *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v4) = 0;
  if ( (Object & 1) != 0 )
  {
    v4 = *flags;
    flags = (unsigned __int16 *)((char *)flags - v4);
  }
  if ( flags[4] == 4096 )
  {
    pObject = (FxObject *)flags;
  }
  else
  {
    pObject = 0LL;
    p_pObject = &pObject;
    v5 = *(_QWORD *)flags;
    v13 = v4;
    v12 = 4096;
    if ( (*(int (__fastcall **)(unsigned __int16 *, FxObject ***))(v5 + 40))(flags, &p_pObject) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *((_FX_DRIVER_GLOBALS **)flags + 2),
        v6,
        v7,
        v8,
        traceGuid,
        (const void *)Object,
        0x1000u,
        flags,
        flags[4]);
      FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)flags + 2), WDF_INVALID_HANDLE, Object, 0x1000uLL);
    }
    flags = (unsigned __int16 *)pObject;
  }
  v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)flags + 2);
  if ( (flags[12] & 2) != 0 )
  {
    WPP_IFR_SF_qd(v9, 2u, 0x12u, 0xCu, WPP_FxObjectAPI_cpp_Traceguids, (const void *)Object, -1073741535);
    v14 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      v9->Public.DriverName,
      (const char *)&v14,
      v9->Public.DriverName,
      (const char *)&v14);
    if ( v9->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)flags + 48LL))(flags);
  }
}
