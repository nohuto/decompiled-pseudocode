/*
 * XREFs of RIMInitializePointerDeviceFrameContactIdMgr @ 0x1C0073030
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C0072EBC (RIMGetMaxCountFeatureDetails.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMInitializePointerDeviceFrameContactIdMgr(__int64 a1, _WORD *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  void *v4; // rax

  v2 = *(_QWORD *)(a1 + 696);
  v3 = 0;
  if ( *a2 == 5 )
    ++*(_DWORD *)(a1 + 704);
  v4 = Win32AllocPoolZInit(8LL * *(unsigned int *)(a1 + 704));
  *(_QWORD *)(v2 + 48) = v4;
  if ( v4 )
    return 1;
  return v3;
}
