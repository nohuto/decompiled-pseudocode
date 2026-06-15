/*
 * XREFs of ?QueryInterface@CProtectedOutputController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016C10
 * Callers:
 *     ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140006BE0 (-GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@.c)
 * Callees:
 *     ?AddRef@CProtectedOutputController@@UEAAKXZ @ 0x140016BD0 (-AddRef@CProtectedOutputController@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CProtectedOutputController::QueryInterface(
        CProtectedOutputController *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 (__fastcall *v5)(CProtectedOutputController *); // rbx
  __int64 v7; // rax

  if ( a3 )
  {
    *a3 = 0LL;
    v3 = -2147467262;
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842.Data4;
    if ( v4 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
      if ( v7 )
        return v3;
      *a3 = this;
      v3 = 0;
      v5 = *(__int64 (__fastcall **)(CProtectedOutputController *))(*(_QWORD *)this + 8LL);
    }
    else
    {
      *a3 = this;
      v3 = 0;
      v5 = *(__int64 (__fastcall **)(CProtectedOutputController *))(*(_QWORD *)this + 8LL);
      if ( v5 == CProtectedOutputController::AddRef )
      {
        CProtectedOutputController::AddRef(this);
        return v3;
      }
    }
    v5(this);
    return v3;
  }
  return 2147500035LL;
}
