/*
 * XREFs of itrp_SH_Common @ 0x1C00B81FC
 * Callers:
 *     itrp_SHC @ 0x1C00B4150 (itrp_SHC.c)
 *     itrp_SHE @ 0x1C0144330 (itrp_SHE.c)
 * Callees:
 *     InvokeProject @ 0x1C00B652C (InvokeProject.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 */

_QWORD *__fastcall itrp_SH_Common(_DWORD *a1, _DWORD *a2, int *a3, char a4)
{
  int v7; // edi
  _QWORD *v8; // rbx
  int v9; // eax
  __int16 v10; // cx
  __int64 v11; // r10
  bool v12; // zf
  __int16 v13; // ax
  _QWORD *result; // rax
  int v15; // eax

  if ( (a4 & 1) != 0 )
  {
    v7 = HIDWORD(qword_1C0323E40);
    v8 = (_QWORD *)LocalGS;
  }
  else
  {
    v7 = dword_1C0323E48;
    v8 = (_QWORD *)qword_1C0323DF8;
  }
  v9 = InvokeProject(
         dword_1C0323E60,
         *(_DWORD *)(*v8 + 4LL * v7) - *(_DWORD *)(v8[2] + 4LL * v7),
         *(_DWORD *)(v8[1] + 4LL * v7) - *(_DWORD *)(v8[3] + 4LL * v7));
  v10 = word_1C0323E58;
  v11 = v9;
  v12 = word_1C0323E58 == 0x4000;
  *a2 = 0;
  v13 = dword_1C0323E0C;
  *a1 = 0;
  if ( v12 )
  {
    if ( v13 )
      *a1 = ((unsigned __int64)(v11 * v13) >> 32 << 18) + ((((unsigned int)(v11 * v13) >> 13) + 1) >> 1);
    if ( HIWORD(dword_1C0323E0C) )
      *a2 = ((unsigned __int64)(v11 * SHIWORD(dword_1C0323E0C)) >> 32 << 18)
          + ((((unsigned int)(v11 * SHIWORD(dword_1C0323E0C)) >> 13) + 1) >> 1);
  }
  else
  {
    if ( v13 )
    {
      v15 = CompDiv((unsigned int)v10, v11 * v13);
      v10 = word_1C0323E58;
      *a1 = v15;
    }
    if ( HIWORD(dword_1C0323E0C) )
      *a2 = CompDiv((unsigned int)v10, v11 * SHIWORD(dword_1C0323E0C));
  }
  result = v8;
  *a3 = v7;
  return result;
}
