/*
 * XREFs of PiDaDispatch @ 0x14048B5FC
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     PiDqDispatch @ 0x14048B6C4 (PiDqDispatch.c)
 */

__int64 __fastcall PiDaDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  IRP *v3; // r8
  __int64 v5; // rax
  unsigned int v6; // ebx
  PFILE_OBJECT FileObject; // rsi
  wchar_t *Buffer; // rdi
  void *v10; // rax
  unsigned __int64 v11; // rdx
  wchar_t *v12; // rcx
  __int64 v13; // r11
  int v14; // r10d
  int v15; // r9d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = a2;
  if ( CurrentStackLocation->MajorFunction )
  {
    v5 = 3 * (__int64)CurrentStackLocation->FileObject->FsContext;
  }
  else
  {
    FileObject = CurrentStackLocation->FileObject;
    Buffer = FileObject->FileName.Buffer;
    if ( !Buffer )
      goto LABEL_15;
    v10 = 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (&IrpHandlingTable)[v11];
      v13 = (char *)Buffer - (char *)v12;
      do
      {
        v14 = *(wchar_t *)((char *)v12 + v13);
        v15 = *v12 - v14;
        if ( v15 )
          break;
        ++v12;
      }
      while ( v14 );
      if ( !v15 )
        break;
      v10 = (char *)v10 + 1;
      v11 += 3LL;
      if ( v11 >= 15 )
        goto LABEL_15;
    }
    if ( v10 == (void *)-1LL )
    {
LABEL_15:
      v6 = -1073741811;
      v3->IoStatus.Status = -1073741811;
      IofCompleteRequest(v3, 0);
      return v6;
    }
    FileObject->FsContext = v10;
    a2 = v3;
    v5 = 3LL * (_QWORD)v10;
  }
  return ((unsigned int (__fastcall *)(__int64, IRP *, IRP *))*(&funcs_14048B638 + v5))(a1, a2, v3);
}
