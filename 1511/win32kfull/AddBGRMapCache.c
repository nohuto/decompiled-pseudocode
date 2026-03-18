/*
 * XREFs of AddBGRMapCache @ 0x1C024E194
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C00BECF8 (CreateDyesColorMappingTable.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     TrimBGRMapCache @ 0x1C024F340 (TrimBGRMapCache.c)
 */

__int64 __fastcall AddBGRMapCache(__int64 a1, int a2)
{
  unsigned int v4; // edi
  int v5; // r8d
  int v6; // eax
  unsigned int v7; // ebp
  unsigned __int64 v8; // rcx
  PVOID v9; // rax
  PVOID v10; // rbx
  PVOID v11; // rsi
  __int64 v12; // rax

  v4 = 1;
  EngAcquireSemaphore(qword_1C0323DB8);
  v5 = dword_1C0323DD8;
  if ( dword_1C0323DD8 > 5 && HIDWORD(qword_1C0323DDC) )
  {
    TrimBGRMapCache();
    v5 = dword_1C0323DD8;
  }
  v6 = qword_1C0323DDC;
  if ( v5 < (int)qword_1C0323DDC )
    goto LABEL_12;
  v7 = qword_1C0323DDC + 10;
  if ( (int)qword_1C0323DDC + 10 < (unsigned int)qword_1C0323DDC )
    goto LABEL_12;
  v8 = 16LL * v7;
  if ( v8 > 0xFFFFFFFF )
    goto LABEL_12;
  v9 = EngAllocMem(1u, v8, 0x30365448u);
  v10 = v9;
  if ( !v9 )
  {
    v6 = qword_1C0323DDC;
    v5 = dword_1C0323DD8;
LABEL_12:
    v10 = Src;
    goto LABEL_13;
  }
  v11 = Src;
  if ( Src )
  {
    memmove(v9, Src, 16LL * dword_1C0323DD8);
    EngFreeMem(v11);
  }
  v5 = dword_1C0323DD8;
  v6 = v7;
  LODWORD(qword_1C0323DDC) = v7;
  Src = v10;
LABEL_13:
  if ( v10 && v5 < v6 )
  {
    v12 = 2LL * v5;
    dword_1C0323DD8 = v5 + 1;
    *((_QWORD *)v10 + v12) = a1;
    *((_DWORD *)v10 + 2 * v12 + 3) = a2;
    *((_DWORD *)v10 + 2 * v12 + 2) = 1;
  }
  else
  {
    v4 = 0;
  }
  EngReleaseSemaphore(qword_1C0323DB8);
  return v4;
}
