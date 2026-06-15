/*
 * XREFs of ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x14002844C
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140009FB0 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall GetCpuManager(struct CpuManager **a1)
{
  unsigned int v1; // esi

  v1 = 0;
  if ( qword_140055BE8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_140055BE8 + 8LL))(qword_140055BE8);
    *a1 = (struct CpuManager *)qword_140055BE8;
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v1;
}
