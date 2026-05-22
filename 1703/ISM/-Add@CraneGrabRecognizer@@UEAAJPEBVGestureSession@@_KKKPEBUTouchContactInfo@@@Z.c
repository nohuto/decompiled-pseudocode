/*
 * XREFs of ?Add@CraneGrabRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180039920
 * Callers:
 *     <none>
 * Callees:
 *     ?IndexOfContactWithId@@YA_NPEBUTouchContactInfo@@HHPEAH@Z @ 0x18003A770 (-IndexOfContactWithId@@YA_NPEBUTouchContactInfo@@HHPEAH@Z.c)
 *     floor @ 0x18009D802 (floor.c)
 *     sqrt @ 0x18009D820 (sqrt.c)
 */

__int64 __fastcall CraneGrabRecognizer::Add(
        CraneGrabRecognizer *this,
        const struct GestureSession *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  int v8; // eax
  int v9; // ecx
  double v10; // xmm0_8
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // r8d
  const struct TouchContactInfo *v14; // r14
  bool v15; // bl
  bool v16; // al
  __int64 v17; // rdi
  __int64 v18; // rbx
  int v19; // eax
  int v20; // ecx
  double v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v26; // [rsp+40h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    if ( *((_DWORD *)this + 4) == 3 )
      goto LABEL_18;
    v13 = *((_DWORD *)this + 6);
    v14 = a6;
    v26 = 0LL;
    v15 = IndexOfContactWithId(a6, a5, v13, (int *)&v26);
    v16 = IndexOfContactWithId(v14, a5, *((_DWORD *)this + 7), (int *)&v26 + 1);
    if ( v15 )
    {
      if ( v16 )
      {
        v17 = 5LL * SHIDWORD(v26);
        v18 = 5LL * (int)v26;
        v19 = *((_DWORD *)v14 + 10 * (int)v26 + 2) - *((_DWORD *)v14 + 10 * SHIDWORD(v26) + 2);
        v20 = *((_DWORD *)v14 + 10 * (int)v26 + 1) - *((_DWORD *)v14 + 10 * SHIDWORD(v26) + 1);
        v21 = sqrt((float)(v20 * v20 + v19 * v19));
        *((_DWORD *)this + 9) = (int)floor(v21);
        *((float *)this + 12) = fminf(*((float *)v14 + 2 * v18 + 5), *((float *)v14 + 2 * v17 + 5));
        LODWORD(v26) = (*((_DWORD *)v14 + 2 * v18 + 1) + *((_DWORD *)v14 + 2 * v17 + 1)) / 2;
        HIDWORD(v26) = (*((_DWORD *)v14 + 2 * v17 + 2) + *((_DWORD *)v14 + 2 * v18 + 2)) / 2;
        *((_QWORD *)this + 5) = v26;
      }
      else
      {
        v22 = (int)v26;
        *((_DWORD *)this + 9) = 0;
        *((_DWORD *)this + 12) = *((_DWORD *)v14 + 10 * v22 + 5);
        *((_QWORD *)this + 5) = *(_QWORD *)((char *)v14 + 40 * v22 + 4);
        *((_DWORD *)this + 7) = 0xFFFF;
      }
    }
    else
    {
      if ( !v16 )
      {
LABEL_17:
        *((_DWORD *)this + 4) = 3;
        goto LABEL_18;
      }
      v23 = SHIDWORD(v26);
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 12) = *((_DWORD *)v14 + 10 * v23 + 5);
      *((_QWORD *)this + 5) = *(_QWORD *)((char *)v14 + 40 * v23 + 4);
      *((_DWORD *)this + 6) = 0xFFFF;
    }
    v24 = *((_DWORD *)this + 9);
    if ( v24 <= *((unsigned __int16 *)this + 26) )
    {
      if ( *((float *)this + 12) >= (float)*((unsigned __int16 *)this + 28)
        && v24 <= *((unsigned __int16 *)this + 27)
        && v24 < *((_DWORD *)this + 8) )
      {
        *((_DWORD *)this + 4) = 2;
      }
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  if ( *((_DWORD *)a2 + 221) >= 2u )
  {
    v8 = *((_DWORD *)a2 + 224) - *((_DWORD *)a2 + 234);
    v9 = *((_DWORD *)a2 + 223) - *((_DWORD *)a2 + 233);
    v10 = sqrt((float)(v9 * v9 + v8 * v8));
    v11 = (int)floor(v10);
    if ( v11 <= *((unsigned __int16 *)this + 26) )
    {
      *((_BYTE *)this + 20) = 0;
      *((_DWORD *)this + 4) = 1;
      *((_DWORD *)this + 6) = *((unsigned __int16 *)a2 + 445);
      *((_DWORD *)this + 7) = *((unsigned __int16 *)a2 + 465);
      LODWORD(v26) = (*((_DWORD *)a2 + 223) + *((_DWORD *)a2 + 233)) / 2;
      v12 = *((_DWORD *)a2 + 234) + *((_DWORD *)a2 + 224);
      *((_DWORD *)this + 8) = v11;
      *((_DWORD *)this + 9) = v11;
      HIDWORD(v26) = v12 / 2;
      *((_QWORD *)this + 5) = v26;
      *((_DWORD *)this + 12) = 0;
LABEL_18:
      *((_BYTE *)this + 20) = 1;
    }
  }
  return 0LL;
}
