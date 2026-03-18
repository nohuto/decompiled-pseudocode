/*
 * XREFs of NtGdiWidenPath @ 0x1C02A68B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00147C4 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00148F0 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C02793AC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C02A5D20 (-bInactive@DC@@QEAAHXZ.c)
 *     ?vReComputeBounds@EPATHOBJ@@QEAAXXZ @ 0x1C02CB1D8 (-vReComputeBounds@EPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  struct _LINEATTRS *v3; // rdi
  ULONG v4; // ecx
  struct _XFORMOBJ v6; // [rsp+28h] [rbp-69h] BYREF
  DC *v7[6]; // [rsp+38h] [rbp-59h] BYREF
  __m128i *v8[16]; // [rsp+68h] [rbp-29h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v1 = 0;
  if ( v7[0] )
  {
    if ( !(unsigned int)DC::bInactive(v7[0]) )
    {
      v2 = 1003;
      goto LABEL_5;
    }
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, v7);
    if ( v8[1] )
    {
      if ( *((_WORD *)v7[0] + 6) > 1u )
      {
LABEL_10:
        v4 = 1003;
LABEL_16:
        EngSetLastError(v4);
LABEL_18:
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v8);
        goto LABEL_19;
      }
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v6, (struct XDCOBJ *)v7, 0x204u);
      v3 = (struct _LINEATTRS *)((char *)v7[0] + 184);
      if ( (*((_DWORD *)v7[0] + 46) & 1) == 0 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v7[0] + 19) + 48LL) & 0x800) == 0 )
          goto LABEL_10;
        v3 = (struct _LINEATTRS *)&unk_1C0324878;
      }
      if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v8, (struct EPATHOBJ *)v8, &v6, v3) )
      {
        v4 = 534;
        goto LABEL_16;
      }
      if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v8, v8, &v6, v3) )
      {
        EPATHOBJ::vReComputeBounds((EPATHOBJ *)v8);
        v1 = 1;
        goto LABEL_18;
      }
    }
    v4 = 8;
    goto LABEL_16;
  }
  v2 = 87;
LABEL_5:
  EngSetLastError(v2);
LABEL_19:
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v1;
}
