/*
 * XREFs of ??0ResourcePolicyEngineServerProxy@ExecutionModel@@IEAA@XZ @ 0x18002113C
 * Callers:
 *     ?InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPEAUIResourcePolicyEngine@2@PEAUIResourcePolicyStore@2@PEAPEAV12@@Z @ 0x1800205EC (-InitializeResourcePolicyEngineServerProxy@ResourcePolicyEngineServerProxy@ExecutionModel@@SAJPE.c)
 * Callees:
 *     <none>
 */

ExecutionModel::ResourcePolicyEngineServerProxy *__fastcall ExecutionModel::ResourcePolicyEngineServerProxy::ResourcePolicyEngineServerProxy(
        ExecutionModel::ResourcePolicyEngineServerProxy *this)
{
  ExecutionModel::ResourcePolicyEngineServerProxy *result; // rax

  *(_QWORD *)this = &ExecutionModel::ResourcePolicyEngineServerProxy::`vftable';
  *((_DWORD *)this + 2) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 16), 0, 0);
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_WORD *)this + 44) = 2048;
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
