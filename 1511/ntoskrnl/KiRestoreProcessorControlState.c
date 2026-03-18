/*
 * XREFs of KiRestoreProcessorControlState @ 0x140154040
 * Callers:
 *     KdpReport @ 0x1401C2790 (KdpReport.c)
 *     KiFreezeTargetExecution @ 0x1401C9144 (KiFreezeTargetExecution.c)
 *     KiRestoreProcessorState @ 0x1401CBE58 (KiRestoreProcessorState.c)
 *     KdpCommandString @ 0x1406ACCEC (KdpCommandString.c)
 *     KdpSymbol @ 0x1406AD058 (KdpSymbol.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRestoreProcessorControlState(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  int v7; // r8d
  unsigned __int64 v8; // rax
  unsigned int v9; // edx

  __writecr0(*(_QWORD *)a1);
  __writecr3(*(_QWORD *)(a1 + 16));
  __writecr4(*(_QWORD *)(a1 + 24));
  __writecr8(*(_QWORD *)(a1 + 160));
  __lgdt((void *)(a1 + 86));
  __lidt((void *)(a1 + 102));
  if ( !HvlVsmEnabled )
  {
    v1 = *(_QWORD *)(a1 + 88) + *(unsigned __int16 *)(a1 + 112);
    *(_BYTE *)(v1 + 5) &= ~2u;
    __asm { ltr     word ptr [rcx+70h] }
  }
  _AX = *(_WORD *)(a1 + 114);
  __asm { lldt    ax }
  _mm_setcsr(*(_DWORD *)(a1 + 116));
  __writedr(7u, 0LL);
  v3 = *(_QWORD *)(a1 + 40);
  __writedr(0, *(_QWORD *)(a1 + 32));
  __writedr(1u, v3);
  v4 = *(_QWORD *)(a1 + 56);
  __writedr(2u, *(_QWORD *)(a1 + 48));
  __writedr(3u, v4);
  v5 = *(_QWORD *)(a1 + 72);
  result = 0LL;
  __writedr(6u, 0LL);
  __writedr(7u, v5);
  if ( (__readgsbyte(0x63EAu) & 2) != 0 )
  {
    if ( (v5 & 0x200) != 0 )
      result = 2LL;
    if ( (v5 & 0x100) != 0 )
      result = (unsigned int)result | 1;
    if ( (_DWORD)result )
    {
      v7 = result;
      v8 = __readmsr(0x1D9u);
      v9 = HIDWORD(v8);
      result = v7 | (unsigned int)v8 & 0xFFFFFFFC;
      __writemsr(0x1D9u, __PAIR64__(v9, result));
    }
  }
  return result;
}
