/*
 * XREFs of ??1ApoData@@QEAA@XZ @ 0x180004660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApoData::~ApoData(ApoData *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
