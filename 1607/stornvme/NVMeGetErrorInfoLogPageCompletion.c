/*
 * XREFs of NVMeGetErrorInfoLogPageCompletion @ 0x1C000A2F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0002E40 (memmove.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0007514 (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall NVMeGetErrorInfoLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  v5 = SrbExtension;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v6 = *(_QWORD *)(v4 + 64);
  else
    v6 = *(_QWORD *)(v4 + 24);
  v7 = *(_DWORD *)(SrbExtension + 4232);
  if ( *(_DWORD *)(v6 + 28) < v7 )
    v7 = *(_DWORD *)(v6 + 28);
  if ( *(_BYTE *)(v4 + 3) == 1 )
    memmove((void *)(v6 + *(unsigned int *)(v6 + 44)), *(const void **)(SrbExtension + 4200), v7);
  else
    *(_BYTE *)(v4 + 3) = 1;
  NVMeFreeDmaBuffer(a1, *(unsigned int *)(v5 + 4232), *(_QWORD *)(v5 + 4200));
  result = 0LL;
  *(_BYTE *)(v5 + 4245) |= 8u;
  *(_QWORD *)(v5 + 4200) = 0LL;
  *(_DWORD *)(v5 + 4232) = 0;
  *(_QWORD *)(v5 + 4224) = 0LL;
  return result;
}
