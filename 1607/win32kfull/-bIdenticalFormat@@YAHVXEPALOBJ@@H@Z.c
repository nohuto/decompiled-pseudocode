/*
 * XREFs of ?bIdenticalFormat@@YAHVXEPALOBJ@@H@Z @ 0x1C0037110
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0036410 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIdenticalFormat(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v4; // r10d
  int v5; // r11d
  int v6; // r8d
  int v7; // r9d
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  int *v12; // rax

  v2 = *(_DWORD *)(a1 + 24);
  v4 = 1;
  v5 = 65280;
  v6 = 255;
  v7 = 16711680;
  if ( (v2 & 2) != 0 )
  {
    v12 = *(int **)(a1 + 120);
    v9 = *v12;
    v8 = v12[1];
    v10 = v12[2];
  }
  else
  {
    v8 = 65280;
    if ( (v2 & 4) != 0 )
    {
      v9 = 255;
      v10 = 16711680;
    }
    else
    {
      v9 = 16711680;
      v10 = 255;
    }
  }
  if ( a2 == 4 )
  {
    v7 = 31744;
    v5 = 992;
    v6 = 31;
  }
  if ( v9 != v7 || v8 != v5 || v10 != v6 )
    return 0;
  return v4;
}
