/*
 * XREFs of NtGdiWidenPath @ 0x1C02A56F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0130838 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01308C4 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C027AD5C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C027AEC4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C02A4BD0 (-bInactive@DC@@QEAAHXZ.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02C7AD8 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  struct _LINEATTRS *v3; // rdi
  ULONG v4; // ecx
  DC *v6[2]; // [rsp+20h] [rbp-49h] BYREF
  struct _XFORMOBJ v7; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v8[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v1 = 0;
  if ( v6[0] )
  {
    if ( !(unsigned int)DC::bInactive(v6[0]) )
    {
      v2 = 1003;
      goto LABEL_5;
    }
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, v6);
    if ( v9 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v7, (struct XDCOBJ *)v6, 0x204u);
      v3 = (struct _LINEATTRS *)((char *)v6[0] + 184);
      if ( (*((_DWORD *)v6[0] + 46) & 1) == 0 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v6[0] + 19) + 48LL) & 0x800) == 0 )
        {
          v4 = 1003;
LABEL_15:
          EngSetLastError(v4);
LABEL_17:
          XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v8);
          goto LABEL_18;
        }
        v3 = (struct _LINEATTRS *)&unk_1C0320CB0;
      }
      if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v8, (struct EPATHOBJ *)v8, &v7, v3) )
      {
        v4 = 534;
        goto LABEL_15;
      }
      if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v8, (struct EPATHOBJ *)v8, &v7, v3) )
      {
        EPATHOBJ::vReComputeBounds((EPATHOBJ *)v8);
        v1 = 1;
        goto LABEL_17;
      }
    }
    v4 = 8;
    goto LABEL_15;
  }
  v2 = 87;
LABEL_5:
  EngSetLastError(v2);
LABEL_18:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v6);
  return v1;
}
