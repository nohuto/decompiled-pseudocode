/*
 * XREFs of ?QueryInterface@CVirtualProtectedOutput@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016900
 * Callers:
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140016E60 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 * Callees:
 *     ?AddRef@CVirtualProtectedOutput@@UEAAKXZ @ 0x1400168A0 (-AddRef@CVirtualProtectedOutput@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualProtectedOutput::QueryInterface(
        CVirtualProtectedOutput *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 (__fastcall *v5)(CVirtualProtectedOutput *); // rbx
  __int64 v7; // rax

  if ( a3 )
  {
    *a3 = 0LL;
    v3 = -2147467262;
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_562462dd_4f9a_4110_9d6a_c3ca0407ff76.Data4;
    if ( v4 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
      if ( v7 )
        return v3;
      *a3 = this;
      v3 = 0;
      v5 = *(__int64 (__fastcall **)(CVirtualProtectedOutput *))(*(_QWORD *)this + 8LL);
    }
    else
    {
      *a3 = this;
      v3 = 0;
      v5 = *(__int64 (__fastcall **)(CVirtualProtectedOutput *))(*(_QWORD *)this + 8LL);
      if ( v5 == CVirtualProtectedOutput::AddRef )
      {
        CVirtualProtectedOutput::AddRef(this);
        return v3;
      }
    }
    v5(this);
    return v3;
  }
  return 2147500035LL;
}
