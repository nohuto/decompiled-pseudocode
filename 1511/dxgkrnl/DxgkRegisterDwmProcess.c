/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C00B9F50
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C000B97C (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 DxgkRegisterDwmProcess()
{
  int v0; // edi
  __int64 v1; // rcx
  __int64 i; // rsi
  VIDSCH_EXPORT *v3; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 result; // rax

  v0 = 0;
  *((_BYTE *)DXGPROCESS::GetCurrent() + 314) = 1;
  for ( i = 120LL; ; i += 8LL )
  {
    DXGGLOBAL::GetGlobal(v1);
    if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + i - 120) )
    {
      v3 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal(v1) + i);
      Current = DXGPROCESS::GetCurrent();
      result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v3, Current);
      if ( (int)result < 0 )
        break;
    }
    if ( (unsigned int)++v0 >= 2 )
      return 0LL;
  }
  return result;
}
