/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C008CA54
 * Callers:
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C008AB70 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C008CB74 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        CCD_TOPOLOGY *this,
        const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR **a3)
{
  __int64 result; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v5; // rcx
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)a3;
  if ( (*(_DWORD *)a2 & 0x10) != 0 && (*((_DWORD *)this + 21) & 1) == 0 )
    return 0LL;
  result = CCD_TOPOLOGY::AddPathDescriptor(
             this,
             (const struct _LUID *)a2 + 1,
             *((_DWORD *)a2 + 4),
             *((_DWORD *)a2 + 5),
             *((_BYTE *)a2 + 121),
             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 20),
             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 21),
             &v6,
             0);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *(_DWORD *)v6 = *(_DWORD *)a2;
    *(_OWORD *)((char *)v5 + 24) = *(_OWORD *)((char *)a2 + 24);
    *(_OWORD *)((char *)v5 + 40) = *(_OWORD *)((char *)a2 + 40);
    *(_OWORD *)((char *)v5 + 56) = *(_OWORD *)((char *)a2 + 56);
    *((_QWORD *)v5 + 9) = *((_QWORD *)a2 + 9);
    *((_DWORD *)v5 + 20) = *((_DWORD *)a2 + 20);
    *((_DWORD *)v5 + 21) = *((_DWORD *)a2 + 21);
    *(_OWORD *)((char *)v5 + 88) = *(_OWORD *)((char *)a2 + 88);
    *(_OWORD *)((char *)v5 + 104) = *(_OWORD *)((char *)a2 + 104);
    *((_DWORD *)v5 + 31) = *((_DWORD *)a2 + 31);
    *((_DWORD *)v5 + 32) = *((_DWORD *)a2 + 32);
    *((_DWORD *)v5 + 33) = *((_DWORD *)a2 + 33);
    *((_QWORD *)v5 + 17) = *((_QWORD *)a2 + 17);
    *((_QWORD *)v5 + 18) = *((_QWORD *)a2 + 18);
    *((_OWORD *)v5 + 10) = *((_OWORD *)a2 + 10);
    *((_DWORD *)v5 + 50) = *((_DWORD *)a2 + 50);
    *((_DWORD *)v5 + 51) = *((_DWORD *)a2 + 51);
    *((_DWORD *)v5 + 52) = *((_DWORD *)a2 + 52);
    *((_DWORD *)v5 + 53) = *((_DWORD *)a2 + 53);
    return (unsigned int)result;
  }
  return result;
}
