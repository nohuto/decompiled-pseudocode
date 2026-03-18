/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C00C2FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C000CF80 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 i; // rsi
  VIDSCH_EXPORT *v7; // rbx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 result; // rax

  v1 = 0;
  *((_BYTE *)DXGPROCESS::GetCurrent(a1) + 314) = 1;
  for ( i = 120LL; ; i += 8LL )
  {
    DXGGLOBAL::GetGlobal(v3, v2, v4, v5);
    if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + i - 120) )
    {
      v7 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal(v3, v2, v4, v5) + i);
      Current = DXGPROCESS::GetCurrent(v8);
      result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v7, Current);
      if ( (int)result < 0 )
        break;
    }
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return result;
}
