/*
 * XREFs of $$c1 @ 0x1402528A4
 * Callers:
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall __c1(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned __int8 v7; // bp
  __int64 v8; // rdx
  PVOID *v9; // r9
  PVOID *v10; // rdx
  PVOID v11; // rcx
  char *v12; // rax
  int v13; // ecx
  char *v14; // r8
  unsigned int v15; // r11d
  __int64 v16; // r10
  char v17; // cl
  __int64 v18; // r14
  char *v19; // rcx
  char v21; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v7 = 0;
  (*(void (__fastcall **)(struct _KTHREAD *))(a1 + 336))(KeGetCurrentThread());
  LOBYTE(v8) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 208))(*(_QWORD *)(a1 + 1152), v8);
  v9 = (PVOID *)PsLoadedModuleList;
  v10 = &PsLoadedModuleList;
  while ( v9 != &PsLoadedModuleList )
  {
    v11 = v9[6];
    if ( a2 >= (unsigned __int64)v11 && a2 < (unsigned __int64)v11 + *((unsigned int *)v9 + 16) )
    {
      LODWORD(v10) = 4;
      v12 = &v21;
      v13 = 4;
      v7 = 1;
      do
      {
        *v12++ = 0;
        --v13;
      }
      while ( v13 );
      v14 = &v21;
      v15 = *((unsigned __int16 *)v9 + 44) >> 1;
      v16 = 0LL;
      do
      {
        if ( v4 >= v15 )
          break;
        ++v4;
        v17 = *((_BYTE *)v9[12] + v16);
        v16 += 2LL;
        *v14++ = v17;
      }
      while ( v4 < 4 );
      v18 = a3 - (_QWORD)&v21;
      v19 = &v21;
      do
      {
        v19[v18] = *v19;
        ++v19;
        v10 = (PVOID *)(unsigned int)((_DWORD)v10 - 1);
      }
      while ( (_DWORD)v10 );
      break;
    }
    v9 = (PVOID *)*v9;
  }
  (*(void (__fastcall **)(_QWORD, PVOID *))(a1 + 256))(*(_QWORD *)(a1 + 1152), v10);
  (*(void (**)(void))(a1 + 344))();
  return v7;
}
