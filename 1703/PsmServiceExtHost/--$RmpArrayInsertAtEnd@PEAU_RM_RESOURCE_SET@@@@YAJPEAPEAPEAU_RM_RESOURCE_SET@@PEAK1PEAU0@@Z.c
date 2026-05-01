/*
 * XREFs of ??$RmpArrayInsertAtEnd@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAK1PEAU0@@Z @ 0x180018B88
 * Callers:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 * Callees:
 *     ??$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z @ 0x180018BCC (--$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z.c)
 */

__int64 __fastcall RmpArrayInsertAtEnd<_RM_RESOURCE_SET *>(_QWORD *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax

  result = RmpArrayGrow<_RM_PARTITION *>(a1, a2, (unsigned int)(*a3 + 1));
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(*a1 + 8LL * (unsigned int)(*a3)++) = a4;
    return 0LL;
  }
  return result;
}
