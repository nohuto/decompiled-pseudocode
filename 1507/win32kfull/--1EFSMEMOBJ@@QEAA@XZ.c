/*
 * XREFs of ??1EFSMEMOBJ@@QEAA@XZ @ 0x1C00EBFA4
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C0032930 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C011EB5C (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02B2F28 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     <none>
 */

void __fastcall EFSMEMOBJ::~EFSMEMOBJ(EFSMEMOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v5; // ecx

  if ( *(_QWORD *)this )
  {
    **((_DWORD **)this + 1) = *(_DWORD *)(*(_QWORD *)this + 64LL);
    v5 = *(_DWORD *)(*(_QWORD *)this + 28LL);
    if ( v5 )
      EngSetLastError(v5);
    FreeTmpBuffer(*(_QWORD *)this, a2, a3, a4);
  }
  else
  {
    **((_DWORD **)this + 1) = 0;
    EngSetLastError(0xEu);
  }
}
