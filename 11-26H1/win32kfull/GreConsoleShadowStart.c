/*
 * XREFs of GreConsoleShadowStart @ 0x140335BD4
 * Callers:
 *     xxxRemoteConsoleShadowStart @ 0x1402D2D90 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreConsoleShadowStart(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v9; // r10
  __int64 result; // rax

  v9 = *(_QWORD **)(W32GetSessionState((_DWORD)a1, a2) + 96);
  v9[585] = a1[1];
  v9[586] = a1[2];
  v9[588] = a1[4];
  v9[587] = a1[3];
  a1[2] = a5;
  result = 1LL;
  a1[1] = a4;
  a1[4] = a3;
  a1[3] = a2;
  return result;
}
