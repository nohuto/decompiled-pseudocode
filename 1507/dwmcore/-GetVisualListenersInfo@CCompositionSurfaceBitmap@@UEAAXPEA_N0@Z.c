/*
 * XREFs of ?GetVisualListenersInfo@CCompositionSurfaceBitmap@@UEAAXPEA_N0@Z @ 0x180008DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CCompositionSurfaceBitmap::GetVisualListenersInfo(CCompositionSurfaceBitmap *this, bool *a2, bool *a3)
{
  bool v3; // si
  char *v4; // rax
  __int64 v5; // r14
  char v6; // di
  unsigned int v7; // r13d
  _QWORD *v8; // rbp
  char v9; // al
  _QWORD *v10; // rcx
  __int64 v11; // r15
  unsigned int v12; // r12d
  __int64 v13; // rdi
  char *v14; // [rsp+20h] [rbp-58h]
  char v15; // [rsp+80h] [rbp+8h]
  bool v18; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v4 = (char *)this - 24;
  v5 = *((_QWORD *)this - 3);
  v6 = 0;
  v18 = 0;
  v14 = (char *)this - 24;
  if ( (v5 & 2) != 0 )
    v5 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v5) = v5 & 1;
  v7 = 0;
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)CPtrArrayBase::operator[](v4, v7);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v8 + 48LL))(v8, 31LL) )
      {
        v18 = 1;
        if ( v6 )
          goto LABEL_18;
        v9 = 0;
        v15 = 0;
        do
        {
          v10 = v8 + 3;
          v11 = v8[3];
          if ( (v11 & 2) != 0 )
            v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(v11) = v11 & 1;
          v12 = 0;
          if ( (_DWORD)v11 )
          {
            while ( 1 )
            {
              v13 = CPtrArrayBase::operator[](v10, v12);
              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, 52LL) )
                break;
              ++v12;
              v10 = v8 + 3;
              if ( v12 >= (unsigned int)v11 )
              {
                v9 = v15;
                goto LABEL_10;
              }
            }
            v9 = 1;
            v15 = 1;
          }
LABEL_10:
          v8 = (_QWORD *)v8[10];
        }
        while ( v8 );
        if ( v9 )
        {
LABEL_18:
          v3 = 1;
          break;
        }
        v6 = 1;
      }
      if ( ++v7 >= (unsigned int)v5 )
        break;
      v4 = v14;
    }
  }
  *a2 = v18;
  *a3 = v3;
}
