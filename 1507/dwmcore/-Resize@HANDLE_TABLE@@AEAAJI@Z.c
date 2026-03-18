/*
 * XREFs of ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x180050E14
 * Callers:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180050D5C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180050EB8 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 * Callees:
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x18001596C (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall HANDLE_TABLE::Resize(HANDLE_TABLE *this, unsigned int a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  char *v8; // rax
  char *v9; // r15
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-28h]

  if ( a2 < *((_DWORD *)this + 3) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xDDu);
    return v7;
  }
  v4 = *((unsigned int *)this + 2);
  v5 = v4 * *((unsigned int *)this + 3);
  if ( v5 > 0xFFFFFFFF )
  {
    v11 = -2147024362;
    v12 = 224;
LABEL_11:
    v7 = v11;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v12);
    return v7;
  }
  v6 = v4 * a2;
  if ( v6 > 0xFFFFFFFF )
  {
    v11 = -2147024362;
    v12 = 225;
    goto LABEL_11;
  }
  v7 = 0;
  v8 = (char *)ReallocHeap(*((void **)this + 3), (unsigned int)v6);
  v9 = v8;
  if ( !v8 )
  {
    v11 = -2147024882;
    v12 = 229;
    goto LABEL_11;
  }
  memset_0(&v8[(unsigned int)v5], 0, (unsigned int)(v6 - v5));
  *((_QWORD *)this + 3) = v9;
  *((_DWORD *)this + 3) = a2;
  return v7;
}
