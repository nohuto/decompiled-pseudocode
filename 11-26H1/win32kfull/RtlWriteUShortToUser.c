/*
 * XREFs of RtlWriteUShortToUser @ 0x1403E23B0
 * Callers:
 *     _BuildPropList @ 0x1401565B8 (_BuildPropList.c)
 *     _BuildNameList @ 0x140259840 (_BuildNameList.c)
 *     NtUserBuildNameList @ 0x140264610 (NtUserBuildNameList.c)
 *     RtlWriteUShortToUser$thunk$4279219291461662417 @ 0x1403570C0 (RtlWriteUShortToUser$thunk$4279219291461662417.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140298384 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteUShortToUser(_WORD *a1, __int16 a2)
{
  ProbeForRead_0(a1, 2uLL, 1u);
  *a1 = a2;
}
