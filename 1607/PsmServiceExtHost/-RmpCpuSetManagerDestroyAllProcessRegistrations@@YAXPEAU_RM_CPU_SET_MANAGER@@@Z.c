/*
 * XREFs of ?RmpCpuSetManagerDestroyAllProcessRegistrations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18002FD58
 * Callers:
 *     RmpCpuSetManagerCleanup @ 0x180031370 (RmpCpuSetManagerCleanup.c)
 * Callees:
 *     ?RmpCpuSetManagerDestroyProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18003020C (-RmpCpuSetManagerDestroyProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS.c)
 */

void __fastcall RmpCpuSetManagerDestroyAllProcessRegistrations(struct _RM_CPU_SET_MANAGER *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  _QWORD *i; // rbx
  _QWORD *j; // rsi
  __int64 v6; // [rsp+70h] [rbp+8h]

  v2 = (_QWORD *)*((_QWORD *)a1 + 6);
  if ( !v2 || (v3 = (_QWORD *)*v2, (*v2 & 1) != 0) )
  {
    for ( i = v2 + 1;
          (unsigned __int64)i < *((_QWORD *)a1 + 6) + 8 * ((unsigned __int64)*((unsigned int *)a1 + 11) >> 5);
          ++i )
    {
      if ( (*(_BYTE *)i & 1) == 0 )
      {
LABEL_18:
        v3 = (_QWORD *)*i;
        goto LABEL_8;
      }
    }
LABEL_7:
    v3 = 0LL;
  }
LABEL_8:
  while ( v3 )
  {
    for ( j = v3 + 3;
          (_QWORD *)*j != j;
          RmpCpuSetManagerDestroyProcessRegistration(a1, (struct _RM_CPU_SET_PROCESS_REGISTRATION *)(*j - 64LL)) )
    {
      ;
    }
    v6 = v3[1] & (-1LL << (*((_DWORD *)a1 + 11) & 0x1F));
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
    {
      for ( i = (_QWORD *)(*((_QWORD *)a1 + 6)
                         + 8LL
                         * ((37
                           * (BYTE6(v6)
                            + 37
                            * (BYTE5(v6)
                             + 37
                             * (BYTE4(v6)
                              + 37
                              * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
                           + HIBYTE(v6)) & (unsigned int)((*((_DWORD *)a1 + 11) >> 5) - 1))
                         + 8);
            (unsigned __int64)i < *((_QWORD *)a1 + 6) + 8 * ((unsigned __int64)*((unsigned int *)a1 + 11) >> 5);
            ++i )
      {
        if ( (*(_BYTE *)i & 1) == 0 )
          goto LABEL_18;
      }
      goto LABEL_7;
    }
  }
}
