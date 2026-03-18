/*
 * XREFs of ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0004394
 * Callers:
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00A2D64 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     DxgkRegisterDwmProcess @ 0x1C00DB650 (DxgkRegisterDwmProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchRegisterAsDwm(VIDSCH_EXPORT *this, struct DXGPROCESS *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx

  v3 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v4 = *((_QWORD *)a2 + 8);
  if ( v4 )
    v3 = *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16);
  return (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)this + 1) + 288LL))(v3);
}
