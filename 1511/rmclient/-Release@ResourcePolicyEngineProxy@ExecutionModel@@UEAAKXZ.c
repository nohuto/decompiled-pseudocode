/*
 * XREFs of ?Release@ResourcePolicyEngineProxy@ExecutionModel@@UEAAKXZ @ 0x180005A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800088D8 (--3@YAXPEAX@Z.c)
 *     ??1ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ @ 0x1800100CC (--1ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineProxy::Release(ExecutionModel::ResourcePolicyEngineProxy *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    ExecutionModel::ResourcePolicyEngineProxy::~ResourcePolicyEngineProxy(this);
    operator delete(this);
  }
  return v2;
}
