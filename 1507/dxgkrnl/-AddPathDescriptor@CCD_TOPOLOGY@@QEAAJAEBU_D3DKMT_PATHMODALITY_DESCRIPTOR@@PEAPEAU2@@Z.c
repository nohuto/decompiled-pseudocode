/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C0065EB0
 * Callers:
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0066E5C (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0065FAC (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        CCD_TOPOLOGY *this,
        const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR **a3)
{
  __int64 result; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v5; // rcx
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)a3;
  result = CCD_TOPOLOGY::AddPathDescriptor(
             this,
             (const struct _LUID *)a2 + 1,
             *((_DWORD *)a2 + 4),
             *((_DWORD *)a2 + 5),
             *((_BYTE *)a2 + 117),
             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 20),
             &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *(_DWORD *)v6 = *(_DWORD *)a2;
    *(_OWORD *)((char *)v5 + 24) = *(_OWORD *)((char *)a2 + 24);
    *(_OWORD *)((char *)v5 + 40) = *(_OWORD *)((char *)a2 + 40);
    *(_OWORD *)((char *)v5 + 56) = *(_OWORD *)((char *)a2 + 56);
    *((_QWORD *)v5 + 9) = *((_QWORD *)a2 + 9);
    *((_DWORD *)v5 + 20) = *((_DWORD *)a2 + 20);
    *(_OWORD *)((char *)v5 + 84) = *(_OWORD *)((char *)a2 + 84);
    *(_OWORD *)((char *)v5 + 100) = *(_OWORD *)((char *)a2 + 100);
    *((_DWORD *)v5 + 30) = *((_DWORD *)a2 + 30);
    *((_DWORD *)v5 + 31) = *((_DWORD *)a2 + 31);
    *((_DWORD *)v5 + 32) = *((_DWORD *)a2 + 32);
    *(_QWORD *)((char *)v5 + 132) = *(_QWORD *)((char *)a2 + 132);
    *(_QWORD *)((char *)v5 + 140) = *(_QWORD *)((char *)a2 + 140);
    *(_OWORD *)((char *)v5 + 156) = *(_OWORD *)((char *)a2 + 156);
    *((_DWORD *)v5 + 50) = *((_DWORD *)a2 + 50);
    *((_DWORD *)v5 + 51) = *((_DWORD *)a2 + 51);
    *((_DWORD *)v5 + 52) = *((_DWORD *)a2 + 52);
    *((_DWORD *)v5 + 53) = *((_DWORD *)a2 + 53);
    return (unsigned int)result;
  }
  return result;
}
