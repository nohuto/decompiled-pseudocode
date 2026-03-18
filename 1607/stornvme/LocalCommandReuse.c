/*
 * XREFs of LocalCommandReuse @ 0x1C000C838
 * Callers:
 *     NVMeNameSpaceIdentify @ 0x1C000DA70 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     memset @ 0x1C0003180 (memset.c)
 */

__int64 __fastcall LocalCommandReuse(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a2 + 96);
  *(_BYTE *)(a2 + 11) = 0;
  memset(v2, 0, 0x1098uLL);
  result = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = result;
  *(_DWORD *)a2 = 1;
  return result;
}
