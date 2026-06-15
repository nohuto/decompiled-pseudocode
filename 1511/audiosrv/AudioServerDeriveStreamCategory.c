/*
 * XREFs of AudioServerDeriveStreamCategory @ 0x180037520
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerDeriveStreamCategory(void *a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 (__fastcall *v5)(CWindowsPolicyManager *, void *, unsigned int, unsigned int, unsigned int *); // rbp
  __int64 result; // rax

  v4 = a2;
  if ( !g_PolicyManager )
    return 2147549183LL;
  v5 = *(__int64 (__fastcall **)(CWindowsPolicyManager *, void *, unsigned int, unsigned int, unsigned int *))(*(_QWORD *)g_PolicyManager + 104LL);
  if ( v5 != CWindowsPolicyManager::DeriveAudioServerStreamCategory )
    return v5(g_PolicyManager, a1, a2, a3, a4);
  result = 0LL;
  if ( a2 > 0xB || a3 >= 0x15 )
    return 2147942487LL;
  if ( a2 )
  {
    if ( !a3 )
      goto LABEL_7;
    return 2147942487LL;
  }
  v4 = a3;
LABEL_7:
  *a4 = v4;
  return result;
}
