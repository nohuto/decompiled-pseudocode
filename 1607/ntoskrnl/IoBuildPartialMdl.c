/*
 * XREFs of IoBuildPartialMdl @ 0x14008FD10
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __stdcall IoBuildPartialMdl(PMDL SourceMdl, PMDL TargetMdl, PVOID VirtualAddress, ULONG Length)
{
  __int64 ByteOffset; // rax
  _BYTE *StartVa; // r11
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned int v9; // r8d
  ULONG v10; // esi
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // rax
  signed __int64 v15; // r8

  ByteOffset = SourceMdl->ByteOffset;
  StartVa = SourceMdl->StartVa;
  BugCheckParameter4 = Length;
  v9 = (_DWORD)VirtualAddress - ByteOffset - (_DWORD)StartVa;
  if ( (_DWORD)BugCheckParameter4 )
    v10 = BugCheckParameter4;
  else
    v10 = SourceMdl->ByteCount - v9;
  if ( VirtualAddress < StartVa
    || (char *)VirtualAddress - ByteOffset - StartVa > (unsigned __int64)SourceMdl->ByteCount )
  {
    KeBugCheckEx(0x12Eu, (ULONG_PTR)SourceMdl, (ULONG_PTR)TargetMdl, (ULONG_PTR)VirtualAddress, BugCheckParameter4);
  }
  TargetMdl->Process = SourceMdl->Process;
  TargetMdl->StartVa = (PVOID)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  v11 = ((unsigned int)VirtualAddress & 0xFFFFF000) - LODWORD(SourceMdl->StartVa);
  TargetMdl->MdlFlags &= 8u;
  TargetMdl->ByteOffset = (unsigned __int16)VirtualAddress & 0xFFF;
  TargetMdl->ByteCount = v10;
  TargetMdl->MdlFlags |= SourceMdl->MdlFlags & 0x48C5 | 0x10;
  TargetMdl->MappedSystemVa = (char *)SourceMdl->MappedSystemVa + v9;
  v12 = (v11 >> 12) + 6LL;
  v13 = (((unsigned __int16)VirtualAddress & 0xFFF) + 4095LL + (unsigned __int64)v10) >> 12;
  v14 = (char *)(&SourceMdl->Next + v12);
  if ( (_DWORD)v13 )
  {
    v15 = (char *)&TargetMdl[1] - v14;
    do
    {
      *(_QWORD *)&v14[v15] = *(_QWORD *)v14;
      v14 += 8;
      LODWORD(v13) = v13 - 1;
    }
    while ( (_DWORD)v13 );
  }
}
