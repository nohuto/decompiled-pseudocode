/*
 * XREFs of FsRtlpOplockUpperLowerCompatible @ 0x14046AE18
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x140076FCC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140077994 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1401343CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401B9498 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlCheckUpperOplock @ 0x14054A668 (FsRtlCheckUpperOplock.c)
 *     FsRtlUpperOplockFsctrl @ 0x14061E504 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     <none>
 */

char __fastcall FsRtlpOplockUpperLowerCompatible(int a1, int a2)
{
  char result; // al
  int v3; // ecx

  result = 1;
  v3 = a1 & 0x1701E;
  if ( !v3 || v3 == 0x10000 )
    return result;
  switch ( a2 )
  {
    case 0:
      return 0;
    case 4096:
      goto LABEL_14;
    case 12288:
      if ( v3 == 12288 )
        return result;
LABEL_14:
      if ( v3 != 4096 && v3 != 16 )
        return 0;
      return result;
  }
  if ( a2 == 20480 && (v3 == 28672 || v3 == 12288 || v3 == 4) )
    return 0;
  return result;
}
