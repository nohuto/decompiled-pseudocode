/*
 * XREFs of ?pstro@UMPDOBJ@@QEAAHPEAPEAU_STROBJ@@@Z @ 0x1C028524C
 * Callers:
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A2020 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0284644 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C02849D4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0284B04 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 */

__int64 __fastcall UMPDOBJ::pstro(UMPDOBJ *this, struct _STROBJ **a2)
{
  _QWORD *v2; // rbx
  void *v5; // rdi
  void *v7; // rsi
  char *KernelPtr; // rax
  __int64 i; // r8
  __int64 v10; // rdx
  char *v11; // rax
  void *v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = *a2;
  if ( *a2 )
  {
    v5 = (void *)v2[5];
    v12 = v5;
    if ( v5 )
    {
      if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)&v12, 2 * *(_DWORD *)v2) )
        return 0LL;
      v5 = v12;
    }
    v7 = (void *)v2[4];
    v12 = v7;
    if ( v7 )
    {
      if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)&v12, 24 * *(_DWORD *)v2) )
        return 0LL;
      v7 = v12;
      KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, (char *)v12);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)v2; *(_QWORD *)&KernelPtr[8 * v10 + 8] = 0LL )
      {
        v10 = 3 * i;
        i = (unsigned int)(i + 1);
      }
    }
    if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 192), (const void **)a2, 0x30u, 0LL) )
      return 0LL;
    v11 = UMPDOBJ::GetKernelPtr((char **)this, (char *)*a2);
    *((_QWORD *)v11 + 5) = v5;
    *((_QWORD *)v11 + 4) = v7;
  }
  return 1LL;
}
