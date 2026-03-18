/*
 * XREFs of ?RemoveUndispatchedFrameFromThreadFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F0C54
 * Callers:
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01F222C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveUndispatchedFrameFromThreadFrameList(struct tagPOINTERINPUTFRAME *a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rcx
  __int64 v3; // rdx

  v1 = (_QWORD *)*((_QWORD *)a1 + 3);
  v2 = (_QWORD *)((char *)a1 + 16);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v1 != v2 )
    __fastfail(3u);
  *v1 = v3;
  *(_QWORD *)(v3 + 8) = v1;
  v2[1] = v2;
  *v2 = v2;
}
