/*
 * XREFs of MiMapProcessExecutable @ 0x1404651F4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiInitializeUserNoAccess @ 0x1404626E4 (MiInitializeUserNoAccess.c)
 *     MiCfgInitializeProcess @ 0x14046549C (MiCfgInitializeProcess.c)
 *     PsMapSystemDlls @ 0x140466680 (PsMapSystemDlls.c)
 *     MmMapViewOfSection @ 0x140466864 (MmMapViewOfSection.c)
 *     PsInitializeFullProcessImageName @ 0x140466C64 (PsInitializeFullProcessImageName.c)
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 */

__int64 __fastcall MiMapProcessExecutable(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  int v4; // eax
  unsigned __int64 v5; // r15
  int v7; // ebp
  __int64 result; // rax
  __int64 v10; // rdi
  ULONG_PTR v11; // rax
  _BYTE *v12; // r8
  unsigned __int64 v13; // rsi
  __m128i v14; // xmm0
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  unsigned __int64 v17; // xmm0_8
  _WORD *v18; // rdx
  _BYTE *v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  int v22; // ebx
  char v23; // al
  int v24; // ecx
  int v25; // edi
  unsigned __int64 v26; // rax
  int v27; // ebp
  unsigned int v28; // esi
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  int v31; // r15d
  unsigned __int64 *v32; // rcx
  __int64 *v33; // r12
  __int64 v34; // rbx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned __int64 v38; // [rsp+50h] [rbp-88h] BYREF
  __int64 v39; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v40; // [rsp+60h] [rbp-78h]
  __int64 v41; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v42[3]; // [rsp+70h] [rbp-68h] BYREF

  v4 = *(_DWORD *)(a2 + 56);
  v5 = a4;
  v40 = a4;
  v7 = a2;
  if ( (v4 & 0x20) == 0 )
    return 3221225545LL;
  v10 = MiSectionControlArea(a2);
  v11 = MI_REFERENCE_CONTROL_AREA_FILE(v10);
  v12 = (_BYTE *)(a1 + 1096);
  v13 = v11;
  v14 = *(__m128i *)(v11 + 88);
  v15 = 0LL;
  v16 = _mm_cvtsi128_si32(v14);
  v17 = _mm_srli_si128(v14, 8).m128i_u64[0];
  v18 = (_WORD *)(v17 + v16);
  if ( v17 )
  {
    if ( (unsigned __int64)v18 > v17 )
    {
      while ( *--v18 != 92 )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned __int64)v18 <= v17 )
          goto LABEL_9;
      }
      ++v18;
LABEL_9:
      if ( (unsigned int)v15 >= 0xF )
        v15 = 14LL;
    }
    v19 = &v12[v15];
    v20 = 0LL;
    v21 = v19 - v12;
    if ( v12 > v19 )
      v21 = 0LL;
    if ( v21 )
    {
      do
      {
        ++v20;
        *v12++ = *(_BYTE *)v18++;
      }
      while ( v20 < v21 );
    }
  }
  *v12 = 0;
  v22 = PsInitializeFullProcessImageName(a1, v18);
  if ( v22 >= 0 )
  {
    MI_DEREFERENCE_CONTROL_AREA_FILE(v10, v13);
    if ( (*(_DWORD *)a3 & 0x80u) == 0 || (result = MiSessionCreate(&v38), (int)result >= 0) )
    {
      v23 = *a3 & 0x10;
      v24 = 0;
      v41 = 0LL;
      v38 = 0LL;
      if ( v23 )
        v24 = 0x20000000;
      v39 = 0LL;
      v25 = MmMapViewOfSection(v7, a1, (unsigned int)&v38, 0, 0LL, (__int64)&v39, (__int64)&v41, 1, v24, 4);
      v26 = v38;
      *(_QWORD *)(a1 + 960) = v38;
      if ( v25 >= 0 )
      {
        v27 = *(_DWORD *)a3;
        v28 = 0;
        if ( (*(_DWORD *)a3 & 0x10) != 0 )
        {
          v29 = 3LL;
          v30 = ((v26 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v31 = 3;
          v32 = v42;
          do
          {
            *v32++ = v30;
            v30 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v29;
          }
          while ( v29 );
          while ( 1 )
          {
            v33 = (__int64 *)v42[--v31];
            v34 = *v33;
            if ( MiPteInShadowRange((__int64)v33) )
              LOBYTE(v34) = MiReadPteShadow((__int64)v33, v34);
            if ( (v34 & 1) == 0 )
              break;
            if ( !v31 )
            {
              if ( (v34 & 0x80u) != 0LL )
                goto LABEL_31;
              break;
            }
          }
          *(_DWORD *)a3 = v27 & 0xFFFFFFEF;
LABEL_31:
          v5 = v40;
          if ( (*a3 & 0x30) == 0x30 )
            v28 = 1;
        }
        v35 = PsMapSystemDlls(a1, v28);
        if ( v35 < 0 )
          v25 = v35;
        if ( v25 >= 0 )
        {
          v36 = MiCfgInitializeProcess(a1);
          if ( v36 >= 0 )
          {
            if ( v5 )
            {
              v37 = MiInitializeUserNoAccess(a1, v5);
              if ( v37 < 0 )
                return (unsigned int)v37;
            }
          }
          else
          {
            return (unsigned int)v36;
          }
        }
      }
      return (unsigned int)v25;
    }
  }
  else
  {
    MI_DEREFERENCE_CONTROL_AREA_FILE(v10, v13);
    return (unsigned int)v22;
  }
  return result;
}
