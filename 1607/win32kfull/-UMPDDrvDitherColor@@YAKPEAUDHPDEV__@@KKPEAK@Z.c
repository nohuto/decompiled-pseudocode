/*
 * XREFs of ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C029D2C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0284644 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

__int64 __fastcall UMPDDrvDitherColor(struct DHPDEV__ *a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  char **v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  unsigned __int64 v13; // rsi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-98h]
  UMPDOBJ *v17; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-7Ch]
  _QWORD Src[6]; // [rsp+40h] [rbp-78h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v17);
  memset(Src, 0, sizeof(Src));
  v8 = (char **)v17;
  v9 = 0;
  if ( !v17 )
    goto LABEL_15;
  v10 = *((_QWORD *)a1 + 228);
  Src[0] = 0xD00000030LL;
  Src[2] = *(_QWORD *)v17;
  Src[3] = v10;
  Src[4] = __PAIR64__(a3, a2);
  if ( a2 == 2 )
  {
    v11 = 1;
  }
  else
  {
    v11 = *((_DWORD *)a1 + 533);
    if ( (unsigned int)(v11 - 1) > 7 )
    {
      v12 = 0;
      goto LABEL_7;
    }
  }
  v12 = dword_1C02F2980[v11 - 1];
LABEL_7:
  if ( !v12
    || (v19 = ((v12 * (unsigned int)*((unsigned __int16 *)a1 + 1068) + 31) >> 3) & 0x1FFFFFFC,
        v13 = v19 * (unsigned __int64)*((unsigned __int16 *)a1 + 1069),
        v13 > 0xFFFFFFFF) )
  {
LABEL_15:
    XUMPDOBJ::~XUMPDOBJ(&v17);
    return 0LL;
  }
  Src[5] = UMPDOBJ::_AllocUserMem(v17, v13, 0);
  if ( Src[5] )
  {
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk((UMPDOBJ *)v8, Src, 48LL, &v18, Size) != -1 )
    {
      if ( Src[5] )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v8, (char *)Src[5]);
        memmove(a4, KernelPtr, (unsigned int)v13);
      }
      v9 = v18;
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v17);
  return v9;
}
