/*
 * XREFs of ?GetLatency@CAPOProcessNode@@UEAAJPEA_J@Z @ 0x1400107C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAPOProcessNode::GetLatency(CAPOProcessNode *this, __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)this + 4) + 40LL) + 32LL))(
           *(_QWORD *)(*((_QWORD *)this + 4) + 40LL),
           a2);
}
