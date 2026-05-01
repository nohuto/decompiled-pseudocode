/*
 * XREFs of ?RmpGameModeConstructRecipientArrayCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180031A30
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     RmpGrowArray @ 0x18002A140 (RmpGrowArray.c)
 *     RmpSystemDuplicateHandle @ 0x1800377C8 (RmpSystemDuplicateHandle.c)
 */

__int64 __fastcall RmpGameModeConstructRecipientArrayCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // rbx
  unsigned int v6; // r9d
  __int64 result; // rax
  unsigned int v9; // esi
  __int64 v10; // rbp
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a4;
  v6 = a4[2];
  if ( *(_DWORD *)(v4 + 64) == v6 )
  {
    result = RmpGrowArray(*(_QWORD *)(v4 + 40), (__int64)a2, a3, v6 + 1, v11, &v12);
    if ( (int)result < 0 )
      return result;
    v9 = v12;
    v10 = v11[0];
    if ( a4[2] < v12 )
      memset_0((void *)(v11[0] + 16LL * a4[2]), 0, 16LL * (v12 - a4[2]));
    *(_QWORD *)(v4 + 40) = v10;
    a4[2] = v9;
  }
  result = RmpSystemDuplicateHandle(a2, (PHANDLE)(*(_QWORD *)(v4 + 40) + 16LL * *(unsigned int *)(v4 + 64)));
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(v4 + 64);
    return 0LL;
  }
  return result;
}
