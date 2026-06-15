/*
 * XREFs of ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x14003635C
 * Callers:
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x140036610 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x140018A08 (--_U@YAPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018A14 (--_V@YAXPEAX@Z.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14002A5C4 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?Add@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z @ 0x1400362B8 (-Add@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z.c)
 *     ?ocslen@@YAHPEBG@Z @ 0x140039574 (-ocslen@@YAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CExpansionVector::Add(
        ATL::CExpansionVector *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r15
  const unsigned __int16 *v4; // r14
  __int64 v5; // rax
  void *v6; // r12
  void *v7; // rdi
  __int64 v8; // r13
  errno_t v9; // eax
  errno_t v10; // eax
  void *v11; // rbx
  void *v13; // [rsp+20h] [rbp-68h] BYREF
  void *v14; // [rsp+28h] [rbp-60h] BYREF
  void *v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-50h]
  rsize_t SourceSize; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  unsigned int v26; // [rsp+A8h] [rbp+20h]

  v18 = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a2 || !a3 )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  SourceSize = 2 * v5 + 2;
  v13 = 0LL;
  try
  {
    v6 = operator new[](saturated_mul(2 * v5 + 2, 2uLL));
    v13 = v6;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v6 = v13;
  }
  v7 = v6;
  v15 = v6;
  v26 = 1;
  v8 = 2LL * (int)(ocslen(v3) + 1);
  v16 = v8;
  v14 = 0LL;
  try
  {
    v11 = operator new[](saturated_mul(v8, 2uLL));
    v14 = v11;
  }
  catch ( ... )
  {
    v26 = 1;
    v3 = a3;
    v4 = a2;
    v6 = v13;
    v7 = v15;
    v8 = v16;
    v11 = v14;
  }
  if ( v6
    && v11
    && (v9 = memcpy_s(v6, SourceSize, v4, SourceSize),
        ATL::AtlCrtErrorCheck(v9),
        v10 = memcpy_s(v11, v8, v3, v8),
        ATL::AtlCrtErrorCheck(v10),
        (unsigned int)ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::Add(
                        (__int64)this,
                        &v13,
                        &v14)) )
  {
    v7 = 0LL;
    v15 = 0LL;
    v11 = 0LL;
  }
  else
  {
    v26 = 0;
  }
  operator delete[](v11);
  operator delete[](v7);
  return v26;
}
