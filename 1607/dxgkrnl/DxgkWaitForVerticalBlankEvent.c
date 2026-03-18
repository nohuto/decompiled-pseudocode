/*
 * XREFs of DxgkWaitForVerticalBlankEvent @ 0x1C00CB850
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CB920 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  ULONG64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned int v8[2]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2026);
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_QWORD *)v3 = *(_QWORD *)v4;
  v5 = DxgkWaitForVerticalBlankEventInternal(
         *v3,
         *(_DWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
         *(_DWORD *)(v4 + 8),
         0,
         0LL);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v6, 2026);
  return v5;
}
