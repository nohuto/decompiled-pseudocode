/*
 * XREFs of XlateReceivePacketStats @ 0x1C005E504
 * Callers:
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C0048330 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 * Callees:
 *     <none>
 */

void __fastcall XlateReceivePacketStats(__int64 a1, _BYTE *a2, unsigned int a3)
{
  _QWORD *v3; // rax

  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    v3 = (_QWORD *)(*(_QWORD *)(a1 + 3192) + 112LL * KeGetPcr()->Prcb.Number);
    *v3 += a3;
    if ( *(_DWORD *)(a1 + 464) )
      goto LABEL_12;
    if ( *a2 == 0xFF && a2[1] == 0xFF && a2[2] == 0xFF && a2[3] == 0xFF && a2[4] == 0xFF && a2[5] == 0xFF )
    {
      ++*(_QWORD *)(*(_QWORD *)(a1 + 3192) + 48LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 3192) + 16LL) += a3;
      return;
    }
    if ( (*a2 & 1) == 0 )
    {
LABEL_12:
      ++v3[4];
      v3[1] += a3;
    }
    else
    {
      ++v3[5];
      v3[3] += a3;
    }
  }
}
