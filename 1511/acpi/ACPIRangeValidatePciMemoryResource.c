/*
 * XREFs of ACPIRangeValidatePciMemoryResource @ 0x1C001DEA8
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C001DD6C (ACPIRangeValidatePciResources.c)
 * Callees:
 *     <none>
 */

int __fastcall ACPIRangeValidatePciMemoryResource(__int64 a1, unsigned int a2, ULONGLONG a3, _DWORD *a4)
{
  unsigned __int64 v4; // rax
  ULONG_PTR v5; // rbx
  __int64 v8; // rsi
  __int64 v9; // r15
  unsigned int v10; // edi
  ULONGLONG MinimumAddress; // r9
  int v12; // r8d
  unsigned __int64 v13; // rdx
  unsigned __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  ULONGLONG Alignment[4]; // [rsp+38h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  ULONGLONG v18; // [rsp+70h] [rbp+18h] BYREF

  v4 = (unsigned __int64)&retaddr;
  v18 = a3;
  v5 = E820Info;
  if ( E820Info )
  {
    v8 = 32LL * a2;
    v9 = v8 + a1;
    LODWORD(v4) = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v8 + a1 + 8), Alignment, &v18, &v15);
    v10 = 0;
    if ( *(_QWORD *)(v5 + 8) )
    {
      MinimumAddress = v18;
      v4 = 0LL;
      do
      {
        v12 = *(_DWORD *)(v5 + 24 * v4 + 32);
        if ( v12 != 2 )
        {
          if ( (unsigned int)(v12 - 3) <= 1 && *(_DWORD *)(v5 + 24 * v4 + 28) )
            *(_DWORD *)(v5 + 24 * v4 + 28) = 0;
          v13 = *(_QWORD *)(v5 + 24 * v4 + 16);
          if ( v15 >= v13 && MinimumAddress < v13 + *(_QWORD *)(v5 + 24 * v4 + 24) )
          {
            if ( (AcpiOverrideAttributes & 1) != 0 && v12 == 4 )
            {
              if ( MinimumAddress < v13 )
              {
                LODWORD(v4) = RtlIoEncodeMemIoResource(
                                (PIO_RESOURCE_DESCRIPTOR)(v9 + 8),
                                *(_BYTE *)(v8 + a1 + 9),
                                v13 - MinimumAddress,
                                Alignment[0],
                                MinimumAddress,
                                v13 - 1);
                if ( (v4 & 0x80000000) != 0LL )
                  return v4;
                MinimumAddress = v18;
              }
            }
            else
            {
              ++*a4;
            }
          }
        }
        v4 = ++v10;
      }
      while ( (unsigned __int64)v10 < *(_QWORD *)(v5 + 8) );
    }
  }
  return v4;
}
