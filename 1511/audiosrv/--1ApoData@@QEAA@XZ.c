/*
 * XREFs of ??1ApoData@@QEAA@XZ @ 0x180038BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall ApoData::~ApoData(ApoData *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 3));
}
