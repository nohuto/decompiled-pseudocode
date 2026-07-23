/*
 * XREFs of sub_140511D20 @ 0x140511D20
 * Callers:
 *     Callout @ 0x1404527D0 (Callout.c)
 * Callees:
 *     QueryUpdateFileEaAllowedExt_0 @ 0x140001298 (QueryUpdateFileEaAllowedExt_0.c)
 *     sub_1400059D8 @ 0x1400059D8 (sub_1400059D8.c)
 *     sub_140005E80 @ 0x140005E80 (sub_140005E80.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     RtlLengthSid @ 0x1400CE984 (RtlLengthSid.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     RtlUIntAdd @ 0x1400F4D30 (RtlUIntAdd.c)
 *     RtlULongLongAdd @ 0x1400F756C (RtlULongLongAdd.c)
 *     KeQueryTimeIncrement @ 0x1401011C0 (KeQueryTimeIncrement.c)
 *     StringCbLengthW @ 0x1401196B4 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     ZwSetCachedSigningLevel @ 0x140181DB0 (ZwSetCachedSigningLevel.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     sub_140268E8C @ 0x140268E8C (sub_140268E8C.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     sub_140408690 @ 0x140408690 (sub_140408690.c)
 *     sub_140409274 @ 0x140409274 (sub_140409274.c)
 *     sub_140409614 @ 0x140409614 (sub_140409614.c)
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     sub_140511984 @ 0x140511984 (sub_140511984.c)
 *     sub_14051D560 @ 0x14051D560 (sub_14051D560.c)
 *     sub_14051E63C @ 0x14051E63C (sub_14051E63C.c)
 *     sub_14051E6B0 @ 0x14051E6B0 (sub_14051E6B0.c)
 *     sub_14051E750 @ 0x14051E750 (sub_14051E750.c)
 *     sub_14051E804 @ 0x14051E804 (sub_14051E804.c)
 *     sub_14051E828 @ 0x14051E828 (sub_14051E828.c)
 *     sub_14051E8D4 @ 0x14051E8D4 (sub_14051E8D4.c)
 *     sub_14051E964 @ 0x14051E964 (sub_14051E964.c)
 *     sub_14051E988 @ 0x14051E988 (sub_14051E988.c)
 *     sub_14051E9EC @ 0x14051E9EC (sub_14051E9EC.c)
 *     sub_14051EA54 @ 0x14051EA54 (sub_14051EA54.c)
 *     sub_14051EAEC @ 0x14051EAEC (sub_14051EAEC.c)
 *     sub_14051EB88 @ 0x14051EB88 (sub_14051EB88.c)
 *     sub_14051EC20 @ 0x14051EC20 (sub_14051EC20.c)
 *     sub_14051EC88 @ 0x14051EC88 (sub_14051EC88.c)
 *     sub_14051ECEC @ 0x14051ECEC (sub_14051ECEC.c)
 *     sub_14051ED10 @ 0x14051ED10 (sub_14051ED10.c)
 *     sub_14051EDAC @ 0x14051EDAC (sub_14051EDAC.c)
 *     sub_14051EE48 @ 0x14051EE48 (sub_14051EE48.c)
 *     sub_14051EEE4 @ 0x14051EEE4 (sub_14051EEE4.c)
 *     sub_14051EF4C @ 0x14051EF4C (sub_14051EF4C.c)
 *     sub_14051EF68 @ 0x14051EF68 (sub_14051EF68.c)
 *     sub_14051F004 @ 0x14051F004 (sub_14051F004.c)
 *     sub_14051F0B8 @ 0x14051F0B8 (sub_14051F0B8.c)
 *     sub_14051F154 @ 0x14051F154 (sub_14051F154.c)
 *     sub_14051F1B8 @ 0x14051F1B8 (sub_14051F1B8.c)
 *     sub_14051F254 @ 0x14051F254 (sub_14051F254.c)
 *     sub_14051F304 @ 0x14051F304 (sub_14051F304.c)
 *     sub_14051F3B8 @ 0x14051F3B8 (sub_14051F3B8.c)
 *     sub_14051F42C @ 0x14051F42C (sub_14051F42C.c)
 *     sub_14051F4C4 @ 0x14051F4C4 (sub_14051F4C4.c)
 *     FsRtlQueryKernelEaFile @ 0x140530A5C (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140541F58 (FsRtlKernelFsControlFile.c)
 *     sub_140544F58 @ 0x140544F58 (sub_140544F58.c)
 *     FsRtlSetKernelEaFile @ 0x140554078 (FsRtlSetKernelEaFile.c)
 *     sub_140556E48 @ 0x140556E48 (sub_140556E48.c)
 *     sub_1405870FC @ 0x1405870FC (sub_1405870FC.c)
 *     sub_1406FDFB8 @ 0x1406FDFB8 (sub_1406FDFB8.c)
 *     sub_1406FE398 @ 0x1406FE398 (sub_1406FE398.c)
 *     sub_1406FE610 @ 0x1406FE610 (sub_1406FE610.c)
 *     sub_1406FEC28 @ 0x1406FEC28 (sub_1406FEC28.c)
 *     sub_1406FF044 @ 0x1406FF044 (sub_1406FF044.c)
 *     sub_1406FF424 @ 0x1406FF424 (sub_1406FF424.c)
 *     sub_1406FFC40 @ 0x1406FFC40 (sub_1406FFC40.c)
 *     sub_1406FFF04 @ 0x1406FFF04 (sub_1406FFF04.c)
 *     sub_1407001D4 @ 0x1407001D4 (sub_1407001D4.c)
 *     sub_140700570 @ 0x140700570 (sub_140700570.c)
 *     sub_140700A3C @ 0x140700A3C (sub_140700A3C.c)
 *     sub_140700DB4 @ 0x140700DB4 (sub_140700DB4.c)
 *     sub_140701190 @ 0x140701190 (sub_140701190.c)
 *     sub_140701618 @ 0x140701618 (sub_140701618.c)
 *     sub_140701838 @ 0x140701838 (sub_140701838.c)
 */

__int64 __fastcall sub_140511D20(unsigned int *a1, unsigned int a2, UINT a3, _QWORD *a4, UINT *a5)
{
  _QWORD *v5; // rdi
  int Acl; // esi
  SIZE_T v7; // r14
  char *v8; // r13
  unsigned int *v9; // r9
  SIZE_T v10; // r15
  unsigned int *v11; // rcx
  unsigned int v12; // r9d
  unsigned int *v13; // r10
  unsigned int v14; // r8d
  SIZE_T v15; // r12
  unsigned int v16; // ecx
  _QWORD *PoolWithTag; // rbx
  PVOID v18; // rax
  char *v19; // r14
  PVOID v20; // rax
  void *v21; // r14
  PVOID v22; // rax
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  unsigned int *v26; // r14
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  PVOID v30; // rcx
  int v31; // r12d
  ULONGLONG v32; // rdi
  ULONGLONG v33; // rax
  __int64 *v34; // rbx
  __int64 v35; // r13
  __int64 v36; // rbx
  SIZE_T v37; // r13
  PVOID v38; // rax
  unsigned __int8 *v39; // r15
  _BYTE *v40; // r14
  int v41; // r11d
  int v42; // edi
  UINT v43; // r10d
  UINT v44; // ebx
  int v45; // r8d
  char v46; // dl
  int v47; // eax
  ULONGLONG v48; // rcx
  int v49; // r12d
  unsigned __int8 *v50; // r13
  unsigned __int8 *v51; // rbx
  unsigned __int8 v52; // al
  int v53; // eax
  int v54; // eax
  UINT v55; // r11d
  UINT v56; // edi
  int v57; // eax
  signed int LowPart; // ecx
  int v59; // eax
  UINT v60; // edi
  _BYTE *v61; // r12
  unsigned __int8 *v62; // r8
  ULONGLONG v63; // r13
  int v64; // edx
  int v65; // eax
  int v66; // r11d
  UINT v67; // edx
  unsigned int v68; // edi
  int v69; // r8d
  int v70; // r11d
  int v71; // edi
  int v72; // r11d
  int v73; // edi
  int v74; // r11d
  int v75; // edi
  int v76; // r15d
  unsigned __int8 *v77; // r14
  __int64 v78; // r13
  int v79; // r11d
  int v80; // edi
  unsigned int v81; // r11d
  unsigned __int8 *QuadPart; // rbx
  unsigned int v83; // edi
  int v84; // r11d
  unsigned __int8 v85; // al
  int v86; // eax
  int v87; // eax
  UINT v88; // esi
  bool v89; // zf
  SIZE_T v90; // rcx
  __m128i v91; // xmm1
  __m128i v92; // xmm2
  const __m128i *v93; // rax
  __m128i v94; // xmm0
  __m128i v95; // xmm0
  __m128i v96; // xmm1
  __m128i v97; // xmm1
  __m128i v98; // xmm1
  __m128i v99; // xmm1
  int v100; // eax
  unsigned int *v101; // r8
  SIZE_T v102; // r14
  char *v103; // rbx
  PVOID v104; // r13
  unsigned int v105; // edi
  unsigned __int64 v106; // rdx
  char *v107; // rcx
  unsigned int v108; // r9d
  char *v109; // r8
  int v110; // edx
  _DWORD *v111; // rax
  unsigned int *v112; // rax
  int v113; // edx
  __int64 v114; // r8
  unsigned int *v115; // rcx
  SIZE_T v116; // r13
  const void *v117; // r14
  unsigned int *v118; // rax
  unsigned int j; // edx
  __int64 v120; // r8
  unsigned int *v121; // rcx
  SIZE_T v122; // r15
  const void *v123; // rdi
  _QWORD *v124; // rbx
  __int64 v125; // r8
  unsigned int *v126; // r13
  PVOID v127; // rax
  PVOID v128; // rax
  void *v129; // rcx
  void *v130; // rcx
  void *v131; // rcx
  void *v132; // r15
  unsigned int v133; // edi
  NTSTATUS v134; // ebx
  ULONGLONG v135; // rcx
  unsigned int v136; // r10d
  int v137; // r9d
  int v138; // r9d
  _QWORD *v139; // rax
  bool v140; // sf
  ULONGLONG v141; // rcx
  unsigned int v142; // r10d
  int v143; // r9d
  unsigned int v144; // r9d
  const wchar_t *v145; // rcx
  unsigned int v146; // eax
  size_t v147; // r14
  WCHAR *v148; // rax
  const WCHAR *v149; // rsi
  ULONGLONG v150; // rcx
  unsigned int v151; // r10d
  int v152; // r9d
  int v153; // r9d
  _DWORD *v154; // rax
  ULONGLONG v155; // rcx
  unsigned int v156; // r10d
  int v157; // r9d
  int v158; // r9d
  UINT *v159; // rax
  UINT v160; // r15d
  int v161; // ebx
  int v162; // eax
  int v163; // ecx
  UINT v164; // eax
  int v165; // eax
  int v166; // eax
  unsigned int v167; // eax
  unsigned int v168; // edx
  unsigned int v169; // eax
  unsigned int v170; // edx
  unsigned int v171; // eax
  unsigned int v172; // edx
  unsigned int v173; // r9d
  unsigned int v174; // edx
  unsigned int v175; // r8d
  unsigned int v176; // eax
  unsigned int v177; // edx
  unsigned int v178; // eax
  int v179; // r14d
  int v180; // eax
  NTSTATUS v181; // eax
  int v182; // eax
  __int64 v183; // rbx
  __int64 v184; // rbx
  int v185; // r14d
  BOOL v186; // eax
  NTSTATUS v187; // eax
  int v188; // r15d
  unsigned int v189; // r8d
  unsigned int *v190; // rdx
  unsigned int v191; // eax
  PVOID v192; // rax
  unsigned int v193; // r10d
  int v194; // edx
  _DWORD *v195; // r9
  int *v196; // rcx
  _DWORD *v197; // r9
  unsigned int v198; // r14d
  int v199; // r11d
  _DWORD *v200; // r9
  _QWORD *v201; // rax
  NTSTATUS v202; // eax
  UINT v203; // edx
  NTSTATUS v204; // eax
  UINT *v205; // r11
  NTSTATUS v206; // eax
  UINT v207; // r9d
  ULONGLONG v208; // r11
  int v209; // edx
  _DWORD *v210; // r11
  _DWORD *v211; // rcx
  NTSTATUS v212; // eax
  UINT v213; // edx
  NTSTATUS v214; // eax
  NTSTATUS v215; // eax
  UINT v216; // edx
  NTSTATUS v217; // eax
  UINT *v218; // r11
  int v219; // r14d
  NTSTATUS v220; // eax
  UINT v221; // r9d
  ULONGLONG v222; // r11
  const void *v223; // r9
  UINT *v224; // r11
  UINT *v225; // r11
  int v226; // r14d
  NTSTATUS v227; // eax
  UINT v228; // r9d
  ULONGLONG v229; // r11
  int v230; // edx
  _DWORD *v231; // r11
  UINT *v232; // rcx
  NTSTATUS v233; // eax
  UINT v234; // edx
  UINT *v235; // r11
  int v236; // edi
  NTSTATUS v237; // eax
  UINT v238; // r9d
  ULONGLONG v239; // r11
  unsigned int v240; // r10d
  int v241; // edx
  _DWORD *v242; // r11
  unsigned int *v243; // rcx
  PSE_EXPORTS v244; // rbx
  ULONG v245; // edi
  ULONG v246; // edi
  ULONG v247; // ebx
  ACL *v248; // rax
  ACL *v249; // r14
  NTSTATUS v250; // eax
  UINT v251; // edx
  NTSTATUS v252; // eax
  UINT v253; // edx
  BOOLEAN v254; // bl
  NTSTATUS v255; // eax
  bool v256; // r15
  bool v257; // di
  const void **v258; // rax
  int v259; // r14d
  UINT v260; // ecx
  UINT v261; // edx
  NTSTATUS v262; // eax
  UINT v263; // ecx
  NTSTATUS v264; // eax
  UINT v265; // ecx
  UINT v266; // eax
  NTSTATUS v267; // eax
  UINT v268; // edx
  UINT *v269; // r10
  NTSTATUS v270; // eax
  UINT v271; // r9d
  ULONGLONG v272; // r10
  int v273; // r11d
  int v274; // edx
  _DWORD *v275; // r10
  _DWORD *v276; // rcx
  PVOID v277; // rax
  int v278; // edx
  _DWORD *v279; // r9
  _DWORD *v280; // rcx
  unsigned int v281; // r11d
  ULONGLONG v282; // rcx
  unsigned int v283; // r10d
  int v284; // r9d
  int v285; // r9d
  _QWORD *v286; // rax
  NTSTATUS v287; // eax
  UINT v288; // edx
  UINT *v289; // r10
  NTSTATUS v290; // eax
  UINT v291; // r9d
  ULONGLONG v292; // r10
  int v293; // r11d
  int v294; // edx
  _DWORD *v295; // r10
  int *v296; // rcx
  PVOID v297; // rax
  int v298; // edx
  _DWORD *v299; // r9
  int *v300; // rcx
  ULONGLONG v301; // rcx
  __int64 v302; // r8
  unsigned int v303; // r10d
  int v304; // r9d
  __int64 v305; // r9
  unsigned int *v306; // rdx
  int updated; // eax
  int v308; // ebx
  NTSTATUS v309; // eax
  UINT v310; // edx
  PVOID v311; // rax
  int v312; // edx
  _DWORD *v313; // r9
  int *v314; // rcx
  NTSTATUS v315; // eax
  UINT v316; // edx
  UINT *v317; // r10
  NTSTATUS v318; // eax
  UINT v319; // r9d
  ULONGLONG v320; // r10
  int v321; // r11d
  int v322; // edx
  _DWORD *v323; // r10
  int *v324; // rcx
  PVOID v325; // rax
  int v326; // edx
  _DWORD *v327; // r9
  int *v328; // rcx
  int v329; // eax
  UINT v330; // ecx
  ULONGLONG v331; // rcx
  unsigned int v332; // r10d
  int v333; // r9d
  int v334; // r9d
  _QWORD *v335; // rax
  int v336; // ebx
  int v337; // eax
  NTSTATUS v338; // eax
  NTSTATUS v339; // ebx
  NTSTATUS v340; // eax
  NTSTATUS v341; // eax
  UINT v342; // r9d
  int v343; // ecx
  NTSTATUS v344; // eax
  UINT v345; // r9d
  NTSTATUS v346; // eax
  UINT v347; // r9d
  NTSTATUS v348; // eax
  UINT v349; // r9d
  UINT v350; // r9d
  UINT v351; // ecx
  UINT v352; // edx
  NTSTATUS v353; // eax
  UINT v354; // ecx
  UINT v355; // eax
  PVOID v356; // rax
  unsigned int v357; // r10d
  int v358; // edx
  _DWORD *v359; // r9
  _DWORD *v360; // rcx
  NTSTATUS v361; // eax
  UINT v362; // edx
  NTSTATUS v363; // eax
  UINT *v364; // r11
  int v365; // ebx
  NTSTATUS v366; // eax
  UINT v367; // r9d
  ULONGLONG v368; // r11
  _DWORD *v369; // r11
  _QWORD *v370; // rax
  NTSTATUS v371; // eax
  UINT v372; // edx
  UINT *v373; // r11
  int v374; // ebx
  NTSTATUS v375; // eax
  UINT v376; // r9d
  ULONGLONG v377; // r11
  unsigned int v378; // r10d
  int v379; // edx
  _DWORD *v380; // r11
  int *v381; // rcx
  ULONGLONG v382; // rcx
  unsigned int v383; // r10d
  int v384; // r9d
  int v385; // r9d
  _QWORD *v386; // rax
  NTSTATUS v387; // eax
  NTSTATUS v388; // ebx
  NTSTATUS v389; // eax
  NTSTATUS v390; // eax
  UINT v391; // ecx
  UINT v392; // r9d
  NTSTATUS v393; // eax
  UINT v394; // r9d
  UINT v395; // edx
  NTSTATUS v396; // eax
  UINT v397; // r9d
  UINT v398; // r9d
  UINT v399; // ecx
  UINT v400; // edx
  NTSTATUS v401; // eax
  UINT v402; // ecx
  UINT v403; // eax
  PVOID v404; // rax
  unsigned int v405; // edi
  int v406; // edx
  _DWORD *v407; // r9
  int *v408; // rcx
  NTSTATUS v409; // eax
  UINT v410; // edx
  UINT *v411; // r10
  NTSTATUS v412; // eax
  UINT v413; // r9d
  ULONGLONG v414; // r10
  int v415; // r11d
  _DWORD *v416; // r10
  _QWORD *v417; // rax
  ULONGLONG v418; // rcx
  unsigned int v419; // r10d
  int v420; // r9d
  int v421; // r9d
  _QWORD *v422; // rax
  NTSTATUS v423; // eax
  __int64 v424; // rbx
  ULONG TimeIncrement; // eax
  NTSTATUS v426; // eax
  UINT v427; // ecx
  UINT v428; // r9d
  NTSTATUS v429; // eax
  UINT v430; // r9d
  UINT v431; // edx
  NTSTATUS v432; // eax
  UINT v433; // r9d
  UINT v434; // r9d
  UINT v435; // ecx
  UINT v436; // edx
  NTSTATUS v437; // eax
  UINT v438; // ecx
  UINT v439; // eax
  PVOID v440; // rax
  unsigned int v441; // ebx
  int v442; // edx
  _DWORD *v443; // r9
  int *v444; // rcx
  NTSTATUS v445; // eax
  UINT v446; // edx
  UINT *v447; // r10
  NTSTATUS v448; // eax
  UINT v449; // r9d
  ULONGLONG v450; // r10
  int v451; // r11d
  _DWORD *v452; // r10
  _QWORD *v453; // rax
  PSE_EXPORTS v454; // rbx
  ULONG v455; // edi
  ULONG v456; // edi
  SIZE_T v457; // rbx
  ACL *v458; // rax
  __int64 v459; // rdx
  __int64 v460; // r8
  ACL *v461; // r14
  BOOLEAN v462; // bl
  bool v463; // di
  int v464; // r14d
  int UpdateFileEaAllowedExt_0; // eax
  PSE_EXPORTS v466; // rbx
  ULONG v467; // edi
  ULONG v468; // edi
  SIZE_T v469; // rbx
  ACL *v470; // rax
  __int64 v471; // rdx
  __int64 v472; // r8
  ACL *v473; // r14
  BOOLEAN v474; // bl
  bool v475; // di
  int v476; // r14d
  int v477; // eax
  PSE_EXPORTS v478; // rbx
  ULONG v479; // edi
  ULONG v480; // edi
  ULONG v481; // ebx
  ACL *v482; // rax
  ACL *v483; // r14
  unsigned int v484; // r11d
  BOOLEAN v485; // bl
  bool v486; // r15
  const void **v487; // rax
  int v488; // r14d
  int v489; // eax
  const void **v490; // r10
  const void **v491; // rax
  int v492; // eax
  ULONGLONG v493; // rcx
  unsigned int v494; // r10d
  int v495; // r9d
  int v496; // r9d
  void **v497; // rax
  ULONGLONG v498; // rcx
  unsigned int v499; // r10d
  int v500; // r9d
  int v501; // r9d
  NTSTATUS *v502; // rax
  ULONGLONG v503; // rcx
  unsigned int v504; // r10d
  int v505; // r9d
  int v506; // r9d
  NTSTATUS *v507; // rax
  ULONGLONG v508; // rcx
  unsigned int v509; // r10d
  int v510; // r9d
  int v511; // r9d
  _QWORD *v512; // rbx
  void *v513; // r14
  NTSTATUS v514; // eax
  struct _FILE_OBJECT *v515; // r15
  size_t *v516; // r14
  SE_SIGNING_LEVEL v517; // cl
  size_t *v518; // rbx
  char *v519; // rax
  char *v520; // r9
  unsigned __int8 *v521; // r10
  unsigned int v522; // edx
  unsigned int v523; // ecx
  __int64 v524; // r11
  int v525; // eax
  NTSTATUS v526; // eax
  UINT v527; // edx
  UINT *v528; // r10
  NTSTATUS v529; // eax
  UINT v530; // r9d
  ULONGLONG v531; // r10
  int v532; // r11d
  int v533; // edx
  _DWORD *v534; // r10
  _DWORD *v535; // rcx
  PVOID v536; // rax
  int v537; // edx
  _DWORD *v538; // r9
  _DWORD *v539; // rcx
  unsigned int v540; // r11d
  ULONGLONG v541; // rcx
  unsigned int v542; // r10d
  int v543; // r9d
  int v544; // r9d
  _QWORD *v545; // rax
  ULONGLONG v546; // rcx
  unsigned int v547; // r10d
  int v548; // r9d
  int v549; // r9d
  void **v550; // rax
  ULONGLONG v551; // rcx
  unsigned int v552; // r10d
  int v553; // r9d
  int v554; // r9d
  UINT *v555; // rax
  NTSTATUS v556; // eax
  struct _FILE_OBJECT *v557; // rdi
  size_t *v558; // rbx
  size_t v559; // rax
  NTSTATUS v560; // eax
  UINT v561; // r9d
  NTSTATUS v562; // eax
  UINT v563; // r9d
  PVOID v564; // rax
  unsigned int v565; // ebx
  _DWORD *v566; // r9
  _QWORD *v567; // rax
  UINT v568; // edi
  NTSTATUS v569; // eax
  UINT v570; // edx
  UINT *v571; // r10
  NTSTATUS v572; // eax
  UINT v573; // r9d
  ULONGLONG v574; // r10
  int v575; // r11d
  UINT *v576; // r10
  void *v577; // rcx
  unsigned int v578; // r11d
  int v579; // edi
  ULONGLONG v580; // rcx
  unsigned int v581; // r10d
  int v582; // r9d
  int v583; // r9d
  _QWORD *v584; // rax
  ULONGLONG v585; // rcx
  unsigned int v586; // r10d
  int v587; // r9d
  int v588; // r9d
  _QWORD **v589; // rax
  char *v590; // r14
  unsigned __int16 *v591; // rbx
  NTSTATUS v592; // eax
  struct _FILE_OBJECT *v593; // r15
  char *v594; // rax
  unsigned __int16 *v595; // rax
  int KernelEaFile; // eax
  __int64 v597; // rdx
  __int64 v598; // r10
  unsigned __int8 *v599; // r8
  unsigned int v600; // ecx
  __int64 v601; // r9
  unsigned int v602; // edx
  int v603; // eax
  PVOID v604; // rax
  int v605; // r15d
  PVOID v606; // rcx
  NTSTATUS v607; // eax
  UINT v608; // r9d
  NTSTATUS v609; // eax
  UINT v610; // r9d
  PVOID v611; // rax
  unsigned int v612; // ebx
  _DWORD *v613; // r9
  _QWORD *v614; // rax
  NTSTATUS v615; // eax
  UINT v616; // edx
  UINT *v617; // r10
  NTSTATUS v618; // eax
  UINT v619; // r9d
  ULONGLONG v620; // r10
  int v621; // r11d
  int v622; // edx
  _DWORD *v623; // r10
  int *v624; // rcx
  NTSTATUS v625; // eax
  UINT v626; // r9d
  int v627; // ecx
  NTSTATUS v628; // eax
  UINT v629; // r9d
  UINT v630; // eax
  PVOID v631; // rax
  unsigned int v632; // ebx
  int v633; // edx
  _DWORD *v634; // r9
  _DWORD *v635; // rcx
  NTSTATUS v636; // eax
  UINT v637; // edx
  UINT *v638; // r10
  NTSTATUS v639; // eax
  UINT v640; // r9d
  ULONGLONG v641; // r10
  int v642; // r11d
  _DWORD *v643; // r10
  unsigned __int64 *v644; // rax
  NTSTATUS v645; // eax
  UINT v646; // r9d
  int v647; // ecx
  NTSTATUS v648; // eax
  UINT v649; // r9d
  NTSTATUS v650; // eax
  UINT v651; // r9d
  UINT v652; // r9d
  UINT v653; // ecx
  UINT v654; // edx
  NTSTATUS v655; // eax
  UINT v656; // ecx
  NTSTATUS v657; // eax
  UINT v658; // ecx
  UINT v659; // eax
  PVOID v660; // rax
  unsigned int v661; // ebx
  int v662; // edx
  _DWORD *v663; // r9
  _DWORD *v664; // rcx
  NTSTATUS v665; // eax
  UINT v666; // edx
  UINT *v667; // r10
  NTSTATUS v668; // eax
  UINT v669; // r9d
  ULONGLONG v670; // r10
  int v671; // r11d
  _DWORD *v672; // r10
  unsigned __int64 *v673; // rax
  PSE_EXPORTS v674; // rbx
  ULONG v675; // edi
  ULONG v676; // edi
  SIZE_T v677; // rbx
  ACL *v678; // rax
  __int64 v679; // rdx
  __int64 v680; // r8
  ACL *v681; // r14
  BOOLEAN v682; // bl
  bool v683; // r14
  int v684; // edi
  int v685; // eax
  unsigned int v686; // r8d
  ULONGLONG v687; // rcx
  unsigned int v688; // r10d
  int v689; // r9d
  int v690; // r9d
  _QWORD *v691; // rax
  ULONGLONG v692; // rcx
  unsigned int v693; // r10d
  int v694; // r9d
  int v695; // r9d
  _DWORD *v696; // rax
  ULONGLONG v697; // rcx
  unsigned int v698; // r10d
  int v699; // r9d
  unsigned int v700; // r9d
  const wchar_t *v701; // rcx
  unsigned int v702; // eax
  size_t v703; // rdi
  PVOID v704; // rax
  PVOID v705; // rbx
  ULONGLONG v706; // rcx
  unsigned int v707; // r10d
  int v708; // r9d
  unsigned int v709; // r11d
  ULONGLONG v710; // rax
  PVOID v711; // rcx
  unsigned int v712; // r10d
  int v713; // r9d
  int v714; // r9d
  _DWORD *v715; // rax
  int v716; // ebx
  NTSTATUS v717; // eax
  UINT v718; // ecx
  UINT v719; // r9d
  NTSTATUS v720; // eax
  UINT v721; // r9d
  UINT v722; // edx
  NTSTATUS v723; // eax
  UINT v724; // r9d
  NTSTATUS v725; // eax
  UINT v726; // r9d
  UINT v727; // edx
  SIZE_T v728; // r9
  UINT v729; // ecx
  UINT v730; // edx
  NTSTATUS v731; // eax
  UINT v732; // ecx
  UINT v733; // eax
  PVOID v734; // rax
  unsigned int v735; // r10d
  int v736; // edx
  _DWORD *v737; // r9
  _DWORD *v738; // rcx
  NTSTATUS v739; // eax
  UINT v740; // edx
  NTSTATUS v741; // eax
  UINT *v742; // r11
  int v743; // ebx
  NTSTATUS v744; // eax
  UINT v745; // r9d
  ULONGLONG v746; // r11
  _DWORD *v747; // r11
  _QWORD *v748; // rax
  NTSTATUS v749; // eax
  UINT v750; // edx
  UINT *v751; // r11
  int v752; // ebx
  NTSTATUS v753; // eax
  UINT v754; // r9d
  ULONGLONG v755; // r11
  unsigned int v756; // r10d
  int v757; // edx
  _DWORD *v758; // r11
  _DWORD *v759; // rcx
  NTSTATUS v760; // eax
  UINT v761; // edx
  UINT *v762; // r10
  NTSTATUS v763; // eax
  UINT v764; // r9d
  ULONGLONG v765; // r10
  int v766; // r11d
  int v767; // edx
  _DWORD *v768; // r10
  _DWORD *v769; // rcx
  PVOID v770; // rax
  int v771; // edx
  _DWORD *v772; // r9
  int *v773; // rcx
  char *v774; // rax
  char *v775; // rbx
  ULONGLONG v776; // rdx
  ULONGLONG v777; // rcx
  UINT v778; // edx
  unsigned __int64 v779; // r14
  __int64 *v780; // rbx
  int v781; // eax
  ULONGLONG v782; // r15
  unsigned int v783; // ecx
  __int64 v784; // rbx
  unsigned __int64 v785; // rcx
  __m128i v786; // xmm1
  __m128i v787; // xmm2
  unsigned __int8 *v788; // rax
  __m128i v789; // xmm0
  __m128i v790; // xmm0
  __m128i v791; // xmm1
  __m128i v792; // xmm1
  __m128i v793; // xmm1
  __m128i v794; // xmm1
  PVOID v795; // rax
  _BYTE *v796; // rsi
  unsigned int v797; // edi
  int v798; // r9d
  UINT v799; // r10d
  int v800; // edx
  char v801; // r11
  int v802; // eax
  ULONGLONG v803; // rcx
  unsigned __int8 *v804; // r15
  unsigned __int8 *v805; // rbx
  int v806; // r13d
  unsigned __int8 v807; // al
  int v808; // eax
  int v809; // eax
  unsigned int v810; // r12d
  int v811; // eax
  int v812; // ecx
  int v813; // eax
  char *v814; // r8
  _BYTE *v815; // rdx
  unsigned __int8 *v816; // r8
  unsigned __int8 *v817; // rcx
  _BYTE *v818; // rsi
  int v819; // r14d
  unsigned __int8 *v820; // rbx
  int v821; // r13d
  int v822; // edi
  int v823; // r13d
  int v824; // r12d
  ULONGLONG v825; // rcx
  unsigned __int8 v826; // al
  int v827; // eax
  int v828; // eax
  unsigned int v829; // edi
  int v830; // r12d
  int v831; // edi
  int v832; // r12d
  int v833; // edi
  int v834; // r12d
  int v835; // edi
  unsigned int v836; // r12d
  int v837; // edi
  int v838; // r12d
  UINT v839; // r15d
  int v840; // edi
  _BYTE *v841; // rdx
  void *v842; // r15
  unsigned int v843; // r14d
  PVOID v844; // rax
  PVOID v845; // rbx
  UINT v846; // edx
  UINT v847; // ecx
  UINT v848; // eax
  _DWORD *v849; // rax
  void *v850; // rdi
  ULONGLONG v851; // rcx
  ULONGLONG v852; // rcx
  UINT v853; // ecx
  PVOID v854; // rax
  _QWORD *v855; // rbx
  void *v856; // rcx
  void *v857; // rcx
  void *v858; // rcx
  _QWORD *v859; // rbx
  void *v860; // rcx
  void *v861; // rcx
  void *v862; // rcx
  unsigned int v864; // [rsp+58h] [rbp-B0h] BYREF
  UINT uAugend[3]; // [rsp+5Ch] [rbp-ACh] BYREF
  PVOID v866; // [rsp+68h] [rbp-A0h]
  _QWORD v867[2]; // [rsp+70h] [rbp-98h] BYREF
  UINT v868; // [rsp+80h] [rbp-88h]
  int v869; // [rsp+84h] [rbp-84h]
  UINT v870; // [rsp+88h] [rbp-80h]
  int v871; // [rsp+8Ch] [rbp-7Ch]
  PVOID v872; // [rsp+90h] [rbp-78h]
  UINT v873; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v874[3]; // [rsp+9Ch] [rbp-6Ch] BYREF
  UINT v875; // [rsp+A8h] [rbp-60h] BYREF
  UINT v876; // [rsp+ACh] [rbp-5Ch]
  UINT v877; // [rsp+B0h] [rbp-58h] BYREF
  UINT v878; // [rsp+B4h] [rbp-54h] BYREF
  UINT v879; // [rsp+B8h] [rbp-50h] BYREF
  UINT v880; // [rsp+BCh] [rbp-4Ch] BYREF
  UINT v881; // [rsp+C0h] [rbp-48h] BYREF
  UINT v882; // [rsp+C4h] [rbp-44h] BYREF
  ULONGLONG v883; // [rsp+C8h] [rbp-40h] BYREF
  PVOID P; // [rsp+D0h] [rbp-38h] BYREF
  UINT v885; // [rsp+D8h] [rbp-30h]
  UINT v886; // [rsp+DCh] [rbp-2Ch]
  UINT v887; // [rsp+E0h] [rbp-28h] BYREF
  ULONGLONG v888; // [rsp+E8h] [rbp-20h] BYREF
  void *Src; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v890; // [rsp+F8h] [rbp-10h] BYREF
  UINT v891; // [rsp+FCh] [rbp-Ch] BYREF
  ULONGLONG v892; // [rsp+100h] [rbp-8h] BYREF
  UINT v893; // [rsp+108h] [rbp+0h] BYREF
  ULONGLONG v894; // [rsp+110h] [rbp+8h] BYREF
  UINT v895; // [rsp+118h] [rbp+10h] BYREF
  LARGE_INTEGER Timeout; // [rsp+120h] [rbp+18h] BYREF
  UINT v897; // [rsp+128h] [rbp+20h] BYREF
  int v898; // [rsp+12Ch] [rbp+24h]
  UINT v899; // [rsp+130h] [rbp+28h] BYREF
  UINT v900; // [rsp+134h] [rbp+2Ch] BYREF
  size_t v901[2]; // [rsp+138h] [rbp+30h] BYREF
  PVOID v902; // [rsp+148h] [rbp+40h] BYREF
  UINT v903; // [rsp+154h] [rbp+4Ch]
  UINT v904; // [rsp+158h] [rbp+50h] BYREF
  int v905; // [rsp+15Ch] [rbp+54h]
  UINT v906; // [rsp+160h] [rbp+58h] BYREF
  UINT v907; // [rsp+164h] [rbp+5Ch] BYREF
  UINT v908; // [rsp+168h] [rbp+60h] BYREF
  UINT v909; // [rsp+16Ch] [rbp+64h] BYREF
  UINT v910; // [rsp+170h] [rbp+68h] BYREF
  UINT v911; // [rsp+174h] [rbp+6Ch] BYREF
  UINT v912; // [rsp+178h] [rbp+70h]
  ULONGLONG i; // [rsp+180h] [rbp+78h] BYREF
  UINT v914; // [rsp+188h] [rbp+80h]
  ULONGLONG v915; // [rsp+190h] [rbp+88h] BYREF
  ULONGLONG v916; // [rsp+198h] [rbp+90h] BYREF
  UINT v917; // [rsp+1A0h] [rbp+98h]
  ULONGLONG v918; // [rsp+1A8h] [rbp+A0h] BYREF
  int v919; // [rsp+1B0h] [rbp+A8h] BYREF
  ULONGLONG v920; // [rsp+1B8h] [rbp+B0h] BYREF
  UINT v921; // [rsp+1C0h] [rbp+B8h]
  ULONGLONG v922; // [rsp+1C8h] [rbp+C0h] BYREF
  UINT v923; // [rsp+1D0h] [rbp+C8h]
  ULONGLONG v924; // [rsp+1D8h] [rbp+D0h] BYREF
  UINT v925; // [rsp+1E0h] [rbp+D8h]
  ULONGLONG v926; // [rsp+1E8h] [rbp+E0h] BYREF
  UINT v927; // [rsp+1F0h] [rbp+E8h]
  ULONGLONG v928; // [rsp+1F8h] [rbp+F0h] BYREF
  UINT v929; // [rsp+200h] [rbp+F8h]
  ULONGLONG v930; // [rsp+208h] [rbp+100h] BYREF
  NTSTATUS v931; // [rsp+210h] [rbp+108h] BYREF
  unsigned int v932; // [rsp+214h] [rbp+10Ch] BYREF
  UINT v933; // [rsp+218h] [rbp+110h]
  ULONGLONG v934; // [rsp+220h] [rbp+118h] BYREF
  UINT v935; // [rsp+228h] [rbp+120h]
  ULONGLONG v936; // [rsp+230h] [rbp+128h] BYREF
  UINT v937; // [rsp+238h] [rbp+130h]
  ULONGLONG v938; // [rsp+240h] [rbp+138h] BYREF
  UINT v939; // [rsp+248h] [rbp+140h]
  ULONGLONG v940; // [rsp+250h] [rbp+148h] BYREF
  ULONGLONG pullResult; // [rsp+258h] [rbp+150h] BYREF
  ULONGLONG v942; // [rsp+260h] [rbp+158h] BYREF
  ULONGLONG v943; // [rsp+268h] [rbp+160h] BYREF
  ULONGLONG v944; // [rsp+270h] [rbp+168h] BYREF
  int v945; // [rsp+278h] [rbp+170h] BYREF
  ULONGLONG v946; // [rsp+280h] [rbp+178h] BYREF
  int v947; // [rsp+288h] [rbp+180h] BYREF
  ULONGLONG v948; // [rsp+290h] [rbp+188h] BYREF
  UINT v949; // [rsp+298h] [rbp+190h]
  ULONGLONG v950; // [rsp+2A0h] [rbp+198h] BYREF
  NTSTATUS v951; // [rsp+2A8h] [rbp+1A0h] BYREF
  unsigned int v952; // [rsp+2ACh] [rbp+1A4h] BYREF
  UINT v953; // [rsp+2B0h] [rbp+1A8h]
  PVOID v954; // [rsp+2B8h] [rbp+1B0h]
  UINT v955; // [rsp+2C0h] [rbp+1B8h]
  UINT v956; // [rsp+2C4h] [rbp+1BCh]
  ULONGLONG v957; // [rsp+2C8h] [rbp+1C0h] BYREF
  UINT v958; // [rsp+2D0h] [rbp+1C8h]
  UINT v959; // [rsp+2D4h] [rbp+1CCh]
  UINT v960; // [rsp+2D8h] [rbp+1D0h]
  UINT v961; // [rsp+2DCh] [rbp+1D4h]
  UINT v962; // [rsp+2E0h] [rbp+1D8h] BYREF
  int v963; // [rsp+2E4h] [rbp+1DCh]
  int v964; // [rsp+2E8h] [rbp+1E0h]
  int v965; // [rsp+2ECh] [rbp+1E4h]
  UINT v966; // [rsp+2F0h] [rbp+1E8h]
  UINT v967; // [rsp+2F4h] [rbp+1ECh]
  UINT v968; // [rsp+2F8h] [rbp+1F0h]
  UINT v969; // [rsp+2FCh] [rbp+1F4h]
  UINT v970; // [rsp+300h] [rbp+1F8h] BYREF
  _QWORD *v971; // [rsp+308h] [rbp+200h]
  PVOID v972; // [rsp+310h] [rbp+208h]
  UINT v973; // [rsp+318h] [rbp+210h] BYREF
  _DWORD v974[4]; // [rsp+320h] [rbp+218h] BYREF
  int v975; // [rsp+330h] [rbp+228h] BYREF
  int v976; // [rsp+338h] [rbp+230h]
  UINT v977; // [rsp+33Ch] [rbp+234h]
  int v978; // [rsp+340h] [rbp+238h] BYREF
  unsigned int v979; // [rsp+344h] [rbp+23Ch]
  UINT v980; // [rsp+348h] [rbp+240h] BYREF
  unsigned int v981; // [rsp+34Ch] [rbp+244h]
  int v982; // [rsp+350h] [rbp+248h] BYREF
  UINT v983; // [rsp+358h] [rbp+250h] BYREF
  int v984; // [rsp+35Ch] [rbp+254h] BYREF
  int v985; // [rsp+360h] [rbp+258h] BYREF
  UINT v986; // [rsp+368h] [rbp+260h]
  UINT v987; // [rsp+36Ch] [rbp+264h]
  int v988; // [rsp+370h] [rbp+268h]
  UINT NumberOfBytes; // [rsp+374h] [rbp+26Ch]
  UINT NumberOfBytes_4; // [rsp+378h] [rbp+270h] BYREF
  UINT v991; // [rsp+380h] [rbp+278h] BYREF
  UINT v992; // [rsp+384h] [rbp+27Ch] BYREF
  UINT v993; // [rsp+388h] [rbp+280h] BYREF
  UINT v994; // [rsp+38Ch] [rbp+284h] BYREF
  int v995; // [rsp+390h] [rbp+288h] BYREF
  UINT v996; // [rsp+398h] [rbp+290h]
  int v997; // [rsp+39Ch] [rbp+294h]
  int v998; // [rsp+3A0h] [rbp+298h] BYREF
  int v999; // [rsp+3A8h] [rbp+2A0h]
  int v1000; // [rsp+3B0h] [rbp+2A8h] BYREF
  int v1001; // [rsp+3B8h] [rbp+2B0h]
  int v1002; // [rsp+3C0h] [rbp+2B8h] BYREF
  int v1003; // [rsp+3C8h] [rbp+2C0h] BYREF
  int v1004; // [rsp+3D0h] [rbp+2C8h] BYREF
  int v1005; // [rsp+3D8h] [rbp+2D0h] BYREF
  UINT v1006; // [rsp+3E0h] [rbp+2D8h] BYREF
  UINT v1007; // [rsp+3E4h] [rbp+2DCh]
  UINT v1008; // [rsp+3E8h] [rbp+2E0h]
  unsigned __int64 v1009; // [rsp+3F0h] [rbp+2E8h]
  int v1010; // [rsp+3F8h] [rbp+2F0h] BYREF
  unsigned __int64 v1011; // [rsp+400h] [rbp+2F8h]
  int v1012; // [rsp+408h] [rbp+300h] BYREF
  UINT v1013; // [rsp+40Ch] [rbp+304h]
  int v1014; // [rsp+410h] [rbp+308h] BYREF
  int v1015; // [rsp+418h] [rbp+310h] BYREF
  int v1016; // [rsp+420h] [rbp+318h] BYREF
  unsigned int v1017; // [rsp+428h] [rbp+320h] BYREF
  int v1018; // [rsp+430h] [rbp+328h] BYREF
  UINT v1019; // [rsp+438h] [rbp+330h] BYREF
  int v1020; // [rsp+440h] [rbp+338h] BYREF
  int v1021; // [rsp+448h] [rbp+340h] BYREF
  UINT v1022; // [rsp+450h] [rbp+348h] BYREF
  ULONGLONG v1023; // [rsp+458h] [rbp+350h] BYREF
  UINT v1024; // [rsp+460h] [rbp+358h] BYREF
  UINT v1025; // [rsp+464h] [rbp+35Ch]
  unsigned int v1026; // [rsp+468h] [rbp+360h]
  int v1027; // [rsp+470h] [rbp+368h] BYREF
  int v1028; // [rsp+478h] [rbp+370h] BYREF
  UINT v1029; // [rsp+480h] [rbp+378h]
  int v1030; // [rsp+488h] [rbp+380h] BYREF
  UINT v1031; // [rsp+490h] [rbp+388h] BYREF
  unsigned int v1032; // [rsp+494h] [rbp+38Ch]
  UINT v1033; // [rsp+498h] [rbp+390h] BYREF
  int v1034; // [rsp+4A0h] [rbp+398h] BYREF
  UINT v1035; // [rsp+4A8h] [rbp+3A0h]
  PVOID v1036; // [rsp+4B0h] [rbp+3A8h]
  HANDLE TargetFile; // [rsp+4B8h] [rbp+3B0h] BYREF
  PVOID v1038; // [rsp+4C0h] [rbp+3B8h]
  PCWSTR SourceString; // [rsp+4C8h] [rbp+3C0h]
  ULONG v1040; // [rsp+4D0h] [rbp+3C8h] BYREF
  ULONGLONG v1041; // [rsp+4D8h] [rbp+3D0h] BYREF
  ULONGLONG v1042; // [rsp+4E0h] [rbp+3D8h] BYREF
  NTSTATUS v1043; // [rsp+4E8h] [rbp+3E0h] BYREF
  unsigned int v1044; // [rsp+4ECh] [rbp+3E4h]
  int v1045; // [rsp+4F0h] [rbp+3E8h]
  int v1046; // [rsp+4F8h] [rbp+3F0h] BYREF
  int v1047; // [rsp+4FCh] [rbp+3F4h]
  int v1048; // [rsp+500h] [rbp+3F8h]
  UINT v1049; // [rsp+504h] [rbp+3FCh]
  int v1050; // [rsp+508h] [rbp+400h]
  UINT v1051; // [rsp+50Ch] [rbp+404h] BYREF
  int v1052; // [rsp+510h] [rbp+408h]
  UINT v1053; // [rsp+514h] [rbp+40Ch] BYREF
  NTSTATUS v1054; // [rsp+518h] [rbp+410h]
  PVOID v1055; // [rsp+520h] [rbp+418h]
  UINT v1056; // [rsp+528h] [rbp+420h] BYREF
  UINT v1057; // [rsp+52Ch] [rbp+424h] BYREF
  int v1058; // [rsp+530h] [rbp+428h]
  int v1059; // [rsp+534h] [rbp+42Ch]
  UINT v1060; // [rsp+538h] [rbp+430h] BYREF
  UINT v1061; // [rsp+53Ch] [rbp+434h] BYREF
  UINT v1062; // [rsp+540h] [rbp+438h] BYREF
  UINT v1063; // [rsp+544h] [rbp+43Ch] BYREF
  unsigned int v1064; // [rsp+548h] [rbp+440h]
  int v1065; // [rsp+54Ch] [rbp+444h]
  UINT v1066; // [rsp+550h] [rbp+448h] BYREF
  __int64 v1067; // [rsp+554h] [rbp+44Ch] BYREF
  UINT v1068; // [rsp+55Ch] [rbp+454h] BYREF
  UINT v1069; // [rsp+560h] [rbp+458h] BYREF
  UINT v1070; // [rsp+564h] [rbp+45Ch] BYREF
  UINT v1071; // [rsp+568h] [rbp+460h] BYREF
  int v1072; // [rsp+56Ch] [rbp+464h]
  int v1073; // [rsp+570h] [rbp+468h]
  UINT v1074; // [rsp+574h] [rbp+46Ch] BYREF
  int v1075; // [rsp+578h] [rbp+470h] BYREF
  int v1076; // [rsp+57Ch] [rbp+474h]
  int v1077; // [rsp+580h] [rbp+478h] BYREF
  UINT v1078; // [rsp+584h] [rbp+47Ch] BYREF
  int v1079; // [rsp+588h] [rbp+480h]
  ULONG v1080; // [rsp+58Ch] [rbp+484h] BYREF
  UINT v1081; // [rsp+590h] [rbp+488h] BYREF
  int v1082; // [rsp+594h] [rbp+48Ch]
  UINT v1083; // [rsp+598h] [rbp+490h] BYREF
  unsigned int v1084; // [rsp+59Ch] [rbp+494h]
  unsigned int v1085; // [rsp+5A0h] [rbp+498h]
  int v1086; // [rsp+5A4h] [rbp+49Ch]
  UINT v1087; // [rsp+5A8h] [rbp+4A0h]
  UINT v1088; // [rsp+5ACh] [rbp+4A4h] BYREF
  UINT v1089; // [rsp+5B0h] [rbp+4A8h] BYREF
  UINT v1090; // [rsp+5B4h] [rbp+4ACh] BYREF
  UINT v1091; // [rsp+5B8h] [rbp+4B0h] BYREF
  UINT v1092; // [rsp+5BCh] [rbp+4B4h]
  UINT v1093; // [rsp+5C0h] [rbp+4B8h] BYREF
  UINT v1094; // [rsp+5C4h] [rbp+4BCh] BYREF
  UINT v1095; // [rsp+5C8h] [rbp+4C0h] BYREF
  UINT v1096; // [rsp+5CCh] [rbp+4C4h] BYREF
  int v1097; // [rsp+5D0h] [rbp+4C8h]
  int v1098; // [rsp+5D4h] [rbp+4CCh] BYREF
  UINT v1099; // [rsp+5D8h] [rbp+4D0h] BYREF
  UINT puResult; // [rsp+5DCh] [rbp+4D4h] BYREF
  HANDLE KeyHandle; // [rsp+5E0h] [rbp+4D8h] BYREF
  UINT v1102; // [rsp+5E8h] [rbp+4E0h] BYREF
  ULONGLONG v1103; // [rsp+5F0h] [rbp+4E8h] BYREF
  UINT uAddend; // [rsp+5F8h] [rbp+4F0h] BYREF
  ULONGLONG v1105; // [rsp+600h] [rbp+4F8h] BYREF
  UINT v1106; // [rsp+608h] [rbp+500h] BYREF
  ULONGLONG v1107; // [rsp+610h] [rbp+508h] BYREF
  int v1108; // [rsp+618h] [rbp+510h]
  ULONGLONG v1109; // [rsp+620h] [rbp+518h] BYREF
  ULONG ReturnLength; // [rsp+628h] [rbp+520h] BYREF
  ULONGLONG v1111; // [rsp+630h] [rbp+528h] BYREF
  unsigned int v1112; // [rsp+638h] [rbp+530h]
  int SystemInformation; // [rsp+640h] [rbp+538h] BYREF
  int v1114; // [rsp+644h] [rbp+53Ch]
  UINT v1115; // [rsp+648h] [rbp+540h] BYREF
  ULONGLONG v1116; // [rsp+650h] [rbp+548h] BYREF
  UINT v1117; // [rsp+658h] [rbp+550h] BYREF
  ULONGLONG v1118; // [rsp+660h] [rbp+558h] BYREF
  int v1119; // [rsp+668h] [rbp+560h]
  UINT v1120; // [rsp+678h] [rbp+570h] BYREF
  ULONGLONG v1121; // [rsp+680h] [rbp+578h] BYREF
  UINT v1122; // [rsp+688h] [rbp+580h] BYREF
  ULONGLONG v1123; // [rsp+690h] [rbp+588h] BYREF
  UINT v1124; // [rsp+698h] [rbp+590h] BYREF
  ULONGLONG v1125; // [rsp+6A0h] [rbp+598h] BYREF
  int v1126; // [rsp+6A8h] [rbp+5A0h] BYREF
  LARGE_INTEGER Interval; // [rsp+6B0h] [rbp+5A8h] BYREF
  int v1128; // [rsp+6B8h] [rbp+5B0h]
  ULONGLONG v1129; // [rsp+6C0h] [rbp+5B8h] BYREF
  UINT v1130; // [rsp+6C8h] [rbp+5C0h] BYREF
  ULONGLONG v1131; // [rsp+6D0h] [rbp+5C8h] BYREF
  UINT v1132; // [rsp+6D8h] [rbp+5D0h] BYREF
  int v1133; // [rsp+6E0h] [rbp+5D8h] BYREF
  int v1134; // [rsp+6E4h] [rbp+5DCh]
  UINT v1135; // [rsp+6E8h] [rbp+5E0h] BYREF
  int v1136; // [rsp+6F0h] [rbp+5E8h] BYREF
  int v1137; // [rsp+6F4h] [rbp+5ECh]
  UINT v1138; // [rsp+6F8h] [rbp+5F0h] BYREF
  int v1139; // [rsp+700h] [rbp+5F8h] BYREF
  int v1140; // [rsp+704h] [rbp+5FCh]
  UINT v1141; // [rsp+708h] [rbp+600h] BYREF
  ULONGLONG v1142; // [rsp+710h] [rbp+608h] BYREF
  NTSTATUS AccessStatus; // [rsp+718h] [rbp+610h] BYREF
  ULONGLONG v1144; // [rsp+720h] [rbp+618h] BYREF
  UINT v1145; // [rsp+728h] [rbp+620h] BYREF
  UINT v1146; // [rsp+72Ch] [rbp+624h] BYREF
  UINT v1147; // [rsp+730h] [rbp+628h] BYREF
  ULONG v1148; // [rsp+734h] [rbp+62Ch] BYREF
  UINT v1149; // [rsp+738h] [rbp+630h] BYREF
  ULONG v1150; // [rsp+73Ch] [rbp+634h] BYREF
  NTSTATUS v1151; // [rsp+740h] [rbp+638h] BYREF
  ULONG v1152; // [rsp+744h] [rbp+63Ch] BYREF
  unsigned int v1153; // [rsp+748h] [rbp+640h]
  int v1154; // [rsp+74Ch] [rbp+644h]
  UINT v1155; // [rsp+750h] [rbp+648h] BYREF
  int v1156; // [rsp+754h] [rbp+64Ch]
  UINT v1157; // [rsp+758h] [rbp+650h] BYREF
  NTSTATUS v1158; // [rsp+75Ch] [rbp+654h]
  UINT v1159; // [rsp+760h] [rbp+658h] BYREF
  UINT v1160; // [rsp+764h] [rbp+65Ch] BYREF
  UINT v1161; // [rsp+768h] [rbp+660h] BYREF
  int v1162; // [rsp+76Ch] [rbp+664h]
  int v1163; // [rsp+770h] [rbp+668h]
  int v1164; // [rsp+774h] [rbp+66Ch]
  int v1165; // [rsp+778h] [rbp+670h]
  void *v1166; // [rsp+780h] [rbp+678h]
  int v1167; // [rsp+788h] [rbp+680h]
  PVOID v1168; // [rsp+790h] [rbp+688h] BYREF
  int v1169; // [rsp+798h] [rbp+690h] BYREF
  UINT v1170; // [rsp+79Ch] [rbp+694h] BYREF
  UINT v1171; // [rsp+7A0h] [rbp+698h] BYREF
  int v1172; // [rsp+7A4h] [rbp+69Ch]
  UINT v1173; // [rsp+7A8h] [rbp+6A0h] BYREF
  UINT v1174; // [rsp+7ACh] [rbp+6A4h]
  SIZE_T v1175; // [rsp+7B0h] [rbp+6A8h]
  HANDLE v1176; // [rsp+7B8h] [rbp+6B0h]
  unsigned __int64 v1177; // [rsp+7C0h] [rbp+6B8h]
  unsigned __int64 Source2; // [rsp+7C8h] [rbp+6C0h] BYREF
  __int64 v1179; // [rsp+7D0h] [rbp+6C8h] BYREF
  __int64 v1180; // [rsp+7D8h] [rbp+6D0h] BYREF
  __int64 v1181; // [rsp+7E0h] [rbp+6D8h] BYREF
  unsigned __int64 v1182; // [rsp+7E8h] [rbp+6E0h] BYREF
  HANDLE Handle; // [rsp+7F0h] [rbp+6E8h]
  unsigned __int64 v1184; // [rsp+7F8h] [rbp+6F0h]
  HANDLE v1185; // [rsp+800h] [rbp+6F8h]
  unsigned __int64 v1186; // [rsp+808h] [rbp+700h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+810h] [rbp+708h]
  _DWORD v1188[2]; // [rsp+818h] [rbp+710h] BYREF
  __int64 v1189; // [rsp+820h] [rbp+718h] BYREF
  STRSAFE_PCNZWCH v1190; // [rsp+828h] [rbp+720h]
  __int64 v1191; // [rsp+830h] [rbp+728h] BYREF
  ULONGLONG v1192; // [rsp+838h] [rbp+730h]
  unsigned __int64 v1193; // [rsp+840h] [rbp+738h]
  PVOID v1194; // [rsp+848h] [rbp+740h]
  __int64 v1195; // [rsp+850h] [rbp+748h] BYREF
  __int64 v1196; // [rsp+858h] [rbp+750h] BYREF
  _QWORD *v1197; // [rsp+860h] [rbp+758h]
  char v1198[4]; // [rsp+868h] [rbp+760h] BYREF
  ACCESS_MASK v1199; // [rsp+86Ch] [rbp+764h] BYREF
  _QWORD *v1200; // [rsp+870h] [rbp+768h]
  NTSTATUS *v1201; // [rsp+878h] [rbp+770h]
  ACCESS_MASK v1202; // [rsp+880h] [rbp+778h] BYREF
  const void *v1203; // [rsp+888h] [rbp+780h]
  PVOID Object; // [rsp+890h] [rbp+788h] BYREF
  _QWORD *v1205; // [rsp+898h] [rbp+790h]
  _QWORD *v1206; // [rsp+8A0h] [rbp+798h]
  void *v1207; // [rsp+8A8h] [rbp+7A0h]
  void **v1208; // [rsp+8B0h] [rbp+7A8h]
  UINT *v1209; // [rsp+8B8h] [rbp+7B0h]
  ACCESS_MASK v1210; // [rsp+8C0h] [rbp+7B8h] BYREF
  _QWORD *v1211; // [rsp+8C8h] [rbp+7C0h]
  UINT *v1212; // [rsp+8D0h] [rbp+7C8h]
  unsigned int *v1213; // [rsp+8D8h] [rbp+7D0h]
  int v1214; // [rsp+8E0h] [rbp+7D8h]
  __int64 v1215; // [rsp+8E8h] [rbp+7E0h]
  __int64 v1216; // [rsp+8F0h] [rbp+7E8h]
  __int64 v1217; // [rsp+8F8h] [rbp+7F0h]
  _QWORD *v1218; // [rsp+900h] [rbp+7F8h]
  LARGE_INTEGER v1219; // [rsp+908h] [rbp+800h] BYREF
  _QWORD **v1220; // [rsp+910h] [rbp+808h]
  void **v1221; // [rsp+918h] [rbp+810h]
  int v1222; // [rsp+920h] [rbp+818h]
  NTSTATUS *v1223; // [rsp+928h] [rbp+820h]
  __int64 v1224; // [rsp+930h] [rbp+828h]
  const void *v1225; // [rsp+938h] [rbp+830h]
  unsigned __int64 v1226; // [rsp+940h] [rbp+838h]
  _DWORD *v1227; // [rsp+948h] [rbp+840h]
  ACCESS_MASK GrantedAccess; // [rsp+950h] [rbp+848h] BYREF
  __int64 v1229; // [rsp+958h] [rbp+850h]
  _DWORD *v1230; // [rsp+960h] [rbp+858h]
  _QWORD *v1231; // [rsp+968h] [rbp+860h]
  unsigned int v1232; // [rsp+970h] [rbp+868h]
  __int64 v1233; // [rsp+978h] [rbp+870h]
  void *v1234; // [rsp+980h] [rbp+878h]
  ACCESS_MASK v1235; // [rsp+988h] [rbp+880h] BYREF
  _DWORD *v1236; // [rsp+990h] [rbp+888h]
  __int64 v1237; // [rsp+998h] [rbp+890h]
  __int64 v1238; // [rsp+9A0h] [rbp+898h]
  _QWORD *v1239; // [rsp+9A8h] [rbp+8A0h]
  char *v1240; // [rsp+9B0h] [rbp+8A8h]
  size_t pcbLength; // [rsp+9B8h] [rbp+8B0h] BYREF
  _QWORD *v1242; // [rsp+9C0h] [rbp+8B8h]
  void *v1243; // [rsp+9C8h] [rbp+8C0h]
  UINT *v1244; // [rsp+9D0h] [rbp+8C8h]
  _QWORD *v1245; // [rsp+9D8h] [rbp+8D0h]
  char v1246[8]; // [rsp+9E0h] [rbp+8D8h] BYREF
  __int128 v1247; // [rsp+9E8h] [rbp+8E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+9F8h] [rbp+8F0h] BYREF
  _DWORD *v1249; // [rsp+A08h] [rbp+900h]
  ULONGLONG v1250[2]; // [rsp+A18h] [rbp+910h] BYREF
  ULONGLONG v1251[2]; // [rsp+A28h] [rbp+920h] BYREF
  ULONGLONG v1252[2]; // [rsp+A38h] [rbp+930h] BYREF
  ULONGLONG v1253[2]; // [rsp+A48h] [rbp+940h] BYREF
  ULONGLONG v1254; // [rsp+A58h] [rbp+950h] BYREF
  UNICODE_STRING v1255; // [rsp+A60h] [rbp+958h] BYREF
  ULONGLONG v1256[2]; // [rsp+A78h] [rbp+970h] BYREF
  ULONGLONG v1257[2]; // [rsp+A88h] [rbp+980h] BYREF
  ULONGLONG v1258[2]; // [rsp+A98h] [rbp+990h] BYREF
  ULONGLONG v1259[2]; // [rsp+AA8h] [rbp+9A0h] BYREF
  ULONGLONG v1260[2]; // [rsp+AB8h] [rbp+9B0h] BYREF
  ULONGLONG v1261[2]; // [rsp+AC8h] [rbp+9C0h] BYREF
  ULONGLONG v1262[2]; // [rsp+AD8h] [rbp+9D0h] BYREF
  ULONGLONG v1263[2]; // [rsp+AE8h] [rbp+9E0h] BYREF
  ULONGLONG v1264[2]; // [rsp+AF8h] [rbp+9F0h] BYREF
  ULONGLONG v1265[2]; // [rsp+B08h] [rbp+A00h] BYREF
  ULONGLONG v1266[2]; // [rsp+B18h] [rbp+A10h] BYREF
  ULONGLONG v1267[2]; // [rsp+B28h] [rbp+A20h] BYREF
  ULONGLONG v1268[2]; // [rsp+B38h] [rbp+A30h] BYREF
  ULONGLONG v1269[2]; // [rsp+B48h] [rbp+A40h] BYREF
  ULONGLONG v1270[2]; // [rsp+B58h] [rbp+A50h] BYREF
  ULONGLONG v1271[2]; // [rsp+B68h] [rbp+A60h] BYREF
  ULONGLONG v1272[2]; // [rsp+B78h] [rbp+A70h] BYREF
  ULONGLONG v1273[2]; // [rsp+B88h] [rbp+A80h] BYREF
  ULONGLONG v1274[2]; // [rsp+B98h] [rbp+A90h] BYREF
  ULONGLONG v1275[2]; // [rsp+BA8h] [rbp+AA0h] BYREF
  ULONGLONG v1276[2]; // [rsp+BB8h] [rbp+AB0h] BYREF
  ULONGLONG v1277[2]; // [rsp+BC8h] [rbp+AC0h] BYREF
  ULONGLONG v1278[2]; // [rsp+BD8h] [rbp+AD0h] BYREF
  ULONGLONG v1279[2]; // [rsp+BE8h] [rbp+AE0h] BYREF
  ULONGLONG v1280[2]; // [rsp+BF8h] [rbp+AF0h] BYREF
  ULONGLONG v1281; // [rsp+C08h] [rbp+B00h] BYREF
  UNICODE_STRING v1282; // [rsp+C10h] [rbp+B08h] BYREF
  ULONGLONG v1283[2]; // [rsp+C28h] [rbp+B20h] BYREF
  ULONGLONG v1284[2]; // [rsp+C48h] [rbp+B40h] BYREF
  ULONGLONG v1285[2]; // [rsp+C58h] [rbp+B50h] BYREF
  ULONGLONG v1286; // [rsp+C68h] [rbp+B60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v1287; // [rsp+C70h] [rbp+B68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+C90h] [rbp+B88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v1289; // [rsp+CB0h] [rbp+BA8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+CD0h] [rbp+BC8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v1291; // [rsp+CF0h] [rbp+BE8h] BYREF
  _BYTE v1292[40]; // [rsp+D10h] [rbp+C08h] BYREF
  _BYTE v1293[40]; // [rsp+D38h] [rbp+C30h] BYREF
  _BYTE v1294[40]; // [rsp+D60h] [rbp+C58h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D88h] [rbp+C80h] BYREF
  _BYTE v1296[40]; // [rsp+DB0h] [rbp+CA8h] BYREF
  __int64 v1297; // [rsp+DD8h] [rbp+CD0h] BYREF
  __int64 v1298; // [rsp+DE0h] [rbp+CD8h] BYREF
  __int128 v1299; // [rsp+DE8h] [rbp+CE0h] BYREF
  int v1300; // [rsp+DF8h] [rbp+CF0h] BYREF
  __int64 v1301; // [rsp+DFCh] [rbp+CF4h]

  v1244 = a5;
  v5 = 0LL;
  v1242 = a4;
  v885 = a3;
  v872 = 0LL;
  v1038 = 0LL;
  v963 = 0;
  memset(v867, 0, sizeof(v867));
  v864 = 0;
  memset(uAugend, 0, sizeof(uAugend));
  v954 = 0LL;
  v876 = 0;
  v1177 = 0LL;
  v972 = 0LL;
  v866 = 0LL;
  v1203 = 0LL;
  v1085 = 0;
  v1225 = 0LL;
  v1044 = 0;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
    v5 = 0LL;
    goto LABEL_2088;
  }
  v7 = *a1;
  v8 = (char *)(a1 + 1);
  if ( a1 + 1 < a1 )
  {
    Acl = -1073741675;
    v5 = 0LL;
    goto LABEL_2088;
  }
  if ( a2 - 4 < (unsigned int)v7 )
  {
    Acl = -1073741762;
    goto LABEL_2088;
  }
  v9 = (unsigned int *)&v8[v7];
  v883 = *a1;
  if ( &v8[v7] < v8 || (unsigned int)v7 >= 0xFFFFFFFC )
  {
    Acl = -1073741675;
    goto LABEL_2088;
  }
  if ( a2 - ((_DWORD)v7 + 4) < 4 )
  {
    Acl = -1073741762;
    goto LABEL_2088;
  }
  v10 = *v9;
  v11 = v9 + 1;
  if ( v9 + 1 < v9 )
    goto LABEL_2083;
  v12 = v7 + 8;
  if ( (int)v7 + 8 < (unsigned int)(v7 + 4) )
    goto LABEL_2083;
  if ( a2 - v12 < (unsigned int)v10 )
  {
    Acl = -1073741762;
    goto LABEL_2088;
  }
  v13 = (unsigned int *)((char *)v11 + v10);
  if ( (unsigned int *)((char *)v11 + v10) < v11 )
    goto LABEL_2083;
  v14 = v10 + v12;
  if ( (unsigned int)v10 + v12 < v12 )
    goto LABEL_2083;
  if ( a2 - v14 < 4 )
  {
    Acl = -1073741762;
    goto LABEL_2088;
  }
  v15 = *v13;
  Src = v13 + 1;
  if ( v13 + 1 < v13 )
    goto LABEL_2083;
  v16 = v14 + 4;
  if ( v14 + 4 < v14 )
    goto LABEL_2083;
  if ( a2 - v16 < (unsigned int)v15 )
  {
    Acl = -1073741762;
    goto LABEL_2088;
  }
  if ( (unsigned int)v15 + v16 < v16 )
  {
LABEL_2083:
    Acl = -1073741675;
    goto LABEL_2088;
  }
  if ( a2 != (_DWORD)v15 + v16 )
  {
    Acl = -1073741762;
    goto LABEL_2088;
  }
  if ( (unsigned int)(v7 + v15 + v10) + 12LL != a2 )
  {
    Acl = -1073741762;
    goto LABEL_2088;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
  if ( !PoolWithTag )
  {
    Acl = -1073741801;
    goto LABEL_56;
  }
  *PoolWithTag = 0LL;
  Acl = 0;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[4] = 0LL;
  PoolWithTag[5] = 0LL;
  if ( !v8 )
  {
    *(_DWORD *)PoolWithTag = 0;
    PoolWithTag[1] = 0LL;
    goto LABEL_35;
  }
  *(_DWORD *)PoolWithTag = v7;
  if ( (_DWORD)v7 )
  {
    v18 = ExAllocatePoolWithTag(PagedPool, v7, 0x20534C53u);
    if ( !v18 )
      goto LABEL_45;
    PoolWithTag[1] = v18;
    memmove(v18, v8, v7);
LABEL_35:
    v19 = &v8[v883 + 4];
    if ( v19 )
    {
      *((_DWORD *)PoolWithTag + 4) = v10;
      if ( !(_DWORD)v10 )
      {
        Acl = -1073741762;
        goto LABEL_46;
      }
      v20 = ExAllocatePoolWithTag(PagedPool, v10, 0x20534C53u);
      if ( !v20 )
      {
LABEL_45:
        Acl = -1073741801;
        goto LABEL_46;
      }
      PoolWithTag[3] = v20;
      Acl = 0;
      memmove(v20, v19, v10);
    }
    else
    {
      *((_DWORD *)PoolWithTag + 4) = 0;
      PoolWithTag[3] = 0LL;
    }
    v21 = Src;
    if ( Src )
    {
      *((_DWORD *)PoolWithTag + 8) = v15;
      if ( !(_DWORD)v15 )
      {
        Acl = -1073741762;
        goto LABEL_46;
      }
      v22 = ExAllocatePoolWithTag(PagedPool, v15, 0x20534C53u);
      if ( !v22 )
        goto LABEL_45;
      PoolWithTag[5] = v22;
      Acl = 0;
      memmove(v22, v21, v15);
    }
    else
    {
      *((_DWORD *)PoolWithTag + 8) = 0;
      PoolWithTag[5] = 0LL;
    }
    v5 = PoolWithTag;
    goto LABEL_56;
  }
  Acl = -1073741762;
LABEL_46:
  v23 = (void *)PoolWithTag[1];
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0x20534C53u);
    PoolWithTag[1] = 0LL;
  }
  v24 = (void *)PoolWithTag[3];
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0x20534C53u);
    PoolWithTag[3] = 0LL;
  }
  v25 = (void *)PoolWithTag[5];
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0x20534C53u);
    PoolWithTag[5] = 0LL;
  }
  ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
LABEL_56:
  if ( Acl < 0 )
  {
    if ( v5 )
    {
      v27 = (void *)v5[1];
      if ( v27 )
      {
        ExFreePoolWithTag(v27, 0x20534C53u);
        v5[1] = 0LL;
      }
      v28 = (void *)v5[3];
      if ( v28 )
      {
        ExFreePoolWithTag(v28, 0x20534C53u);
        v5[3] = 0LL;
      }
      v29 = (void *)v5[5];
      if ( v29 )
      {
        ExFreePoolWithTag(v29, 0x20534C53u);
        v5[5] = 0LL;
      }
      ExFreePoolWithTag(v5, 0x20534C53u);
    }
    v26 = (unsigned int *)v872;
  }
  else
  {
    v26 = (unsigned int *)v5;
    v872 = v5;
  }
  if ( Acl < 0 )
    goto LABEL_2087;
  v1175 = 0LL;
  v30 = 0LL;
  v1036 = 0LL;
  Acl = 0;
  v911 = 0;
  if ( !v26 )
  {
    Acl = -1073741811;
    v5 = 0LL;
    goto LABEL_2088;
  }
  if ( !*((_QWORD *)v26 + 1) )
  {
    Acl = -1073741811;
    v5 = 0LL;
    goto LABEL_2088;
  }
  if ( !*v26 )
  {
    Acl = -1073741811;
    v5 = 0LL;
    goto LABEL_2088;
  }
  if ( !*((_QWORD *)v26 + 5) )
  {
    Acl = -1073741811;
    v5 = 0LL;
    goto LABEL_2088;
  }
  if ( !v26[8] )
  {
    Acl = -1073741811;
    v5 = 0LL;
    goto LABEL_2088;
  }
  if ( !*((_QWORD *)v26 + 3) )
  {
    Acl = -1073741811;
    v5 = 0LL;
    goto LABEL_2088;
  }
  if ( !v26[4] )
  {
    Acl = -1073741811;
    v5 = 0LL;
    goto LABEL_2088;
  }
  v1175 = *v26;
  v31 = -1;
  v32 = *((_QWORD *)v26 + 1);
  v33 = *((_QWORD *)v26 + 3);
  v34 = (__int64 *)*((_QWORD *)v26 + 5);
  v35 = *v26;
  v883 = v33;
  v1023 = v32;
  if ( v32 && v35 && v33 && v34 && v26[8] == 8 && v26[4] == 160 )
  {
    v36 = *v34;
    v37 = v35 - 8;
    LOBYTE(v874[0]) = 0;
    v902 = (PVOID)v37;
    v38 = ExAllocatePoolWithTag(PagedPool, v37, 0x20534C53u);
    P = v38;
    if ( v38 )
    {
      v1297 = v36;
      Src = v38;
      Timeout.QuadPart = v37 & 7;
      v39 = (unsigned __int8 *)v32;
      v40 = v38;
      if ( (v37 & 7) != 0 )
      {
        v868 = -1;
        v870 = 0;
        v41 = 0;
        v873 = 0;
        v42 = -1;
        v875 = 0;
        v43 = 0;
        v44 = 0;
        v45 = 0;
        v46 = 56;
        do
        {
          v47 = *v39;
          if ( v45 >= 4 )
            v43 |= v47 << v46;
          else
            v44 |= v47 << (v46 - 32);
          ++v39;
          ++v45;
          v46 -= 8;
        }
        while ( v45 < (unsigned __int8)(v37 & 7) );
        v875 = v44;
        v873 = v43;
        v48 = 16LL;
        v49 = 30;
        v892 = 16LL;
        v50 = (unsigned __int8 *)(v883 + 158);
        v51 = (unsigned __int8 *)(v883 + 126);
        do
        {
          v52 = v50[1];
          if ( v52 < 0x1Fu )
          {
            v53 = funcs_14051232E[v52](v49 + 1, *(v51 - 2), *(v51 - 1), *v51, v51[1], (__int64)&v1297, v41);
            v41 = v870;
            v42 = v53 ^ v868;
            v48 = v892;
            v868 ^= v53;
          }
          if ( *v50 < 0x1Fu )
          {
            v54 = funcs_14051232E[*v50](v49, *(v51 - 6), *(v51 - 5), *(v51 - 4), *(v51 - 3), (__int64)&v1297, v42);
            v42 = v868;
            v41 = v54 ^ v870;
            v48 = v892;
            v870 ^= v54;
          }
          v49 -= 2;
          v51 -= 8;
          v50 -= 2;
          v892 = --v48;
        }
        while ( v48 );
        v55 = v875 ^ v41;
        v56 = v873 ^ v42;
        v57 = 0;
        LowPart = Timeout.LowPart;
        v31 = -1;
        v40 = Src;
        v870 = v55;
        v868 = v56;
        if ( (int)Timeout.LowPart > 0 )
        {
          do
          {
            if ( v57 >= 4 )
            {
              v56 = __ROL4__(v56, 8);
              *v40 = v56;
            }
            else
            {
              v55 = __ROL4__(v55, 8);
              *v40 = v55;
            }
            ++v40;
            ++v57;
          }
          while ( v57 < LowPart );
          v55 = v870;
          v56 = v868;
        }
        LODWORD(v36) = v1297;
        v59 = LowPart - 4;
        v37 = (SIZE_T)v902;
        if ( LowPart - 4 <= 0 )
        {
          v868 = 0;
          v60 = 0;
          if ( v59 < 0 )
          {
            v55 = v55 >> (-8 * v59) << (-8 * v59);
            v870 = v55;
          }
        }
        else
        {
          v60 = v56 >> (8 * (4 - v59)) << (8 * (4 - v59));
          v868 = v60;
        }
      }
      else
      {
        v873 = -1;
        v875 = 0;
        v60 = 0;
        v868 = 0;
        v55 = 0;
        v870 = 0;
      }
      Src = (void *)(v37 >> 3);
      if ( v37 >> 3 )
      {
        v61 = v40 + 7;
        v62 = v39 + 2;
        v63 = v883 + 158;
        Timeout.QuadPart = v883 + 126;
        for ( i = v883 + 158; ; v63 = i )
        {
          v64 = v62[2] << 8;
          v65 = v62[3];
          v66 = (v62[1] | ((*v62 | ((*(v62 - 1) | (*(v62 - 2) << 8)) << 8)) << 8)) ^ v55;
          v891 = v62[1] | ((*v62 | ((*(v62 - 1) | (*(v62 - 2) << 8)) << 8)) << 8);
          v67 = v62[5] | ((v62[4] | ((v65 | v64) << 8)) << 8);
          v883 = (ULONGLONG)(v62 + 8);
          v909 = v67;
          v68 = v36 ^ HIDWORD(v1297) ^ v66 ^ v67 ^ v60;
          v69 = (unsigned __int16)v36;
          v70 = (v68 >> 8) ^ (WORD2(v1297) * (v68 ^ WORD1(v1297))) ^ v66;
          v71 = (WORD1(v1297) * __ROR4__(HIDWORD(v1297) - v70, 11) - __ROR4__(v70, 12)) ^ v68;
          v72 = ((unsigned __int16)v36 * __ROL4__(HIDWORD(v1297) ^ v71, 8) - __ROL4__(v71, 2)) ^ v70;
          v73 = __ROR4__(v72, 9) ^ (HIWORD(v1297) * __ROR4__(v72 - v36, 4)) ^ v71;
          v74 = (__ROR4__(v73, 4) + WORD2(v1297) * __ROR4__(v36 - v73, 10)) ^ v72;
          v75 = (WORD1(v1297) * __ROL4__(v74 ^ HIWORD(v1297), 4) - __ROR4__(v74, 16)) ^ v73;
          v76 = 30;
          v77 = (unsigned __int8 *)v63;
          v78 = 16LL;
          v79 = ((unsigned __int16)v36 * (v75 ^ WORD1(v1297)) - __ROR4__(v75, 7)) ^ v74;
          v80 = (v79 - HIWORD(v1297) - v36) ^ v75;
          v81 = __ROR4__(v80, 11) ^ (WORD2(v1297) * __ROR4__(v36 - v80, 9)) ^ v79;
          QuadPart = (unsigned __int8 *)Timeout.QuadPart;
          v83 = (WORD1(v1297) * (v81 - WORD2(v1297)) - (v81 >> 13)) ^ v80;
          v868 = v83;
          v84 = (v83 >> 15) ^ (v69 * __ROL4__(v83 - WORD2(v1297), 3)) ^ v81;
          v870 = v84;
          do
          {
            v85 = v77[1];
            if ( v85 < 0x1Fu )
            {
              v86 = funcs_14051232E[v85](
                      v76 + 1,
                      *(QuadPart - 2),
                      *(QuadPart - 1),
                      *QuadPart,
                      QuadPart[1],
                      (__int64)&v1297,
                      v84);
              v84 = v870;
              v83 = v86 ^ v868;
              v868 ^= v86;
            }
            if ( *v77 < 0x1Fu )
            {
              v87 = funcs_14051232E[*v77](
                      v76,
                      *(QuadPart - 6),
                      *(QuadPart - 5),
                      *(QuadPart - 4),
                      *(QuadPart - 3),
                      (__int64)&v1297,
                      v83);
              v83 = v868;
              v84 = v87 ^ v870;
              v870 ^= v87;
            }
            v76 -= 2;
            QuadPart -= 8;
            v77 -= 2;
            --v78;
          }
          while ( v78 );
          v88 = v909;
          v868 = v873 ^ v83;
          v870 = v875 ^ v84;
          *(v61 - 4) = v875 ^ v84;
          v870 = __ROR4__(v870, 8);
          *v61 = v868;
          v868 = __ROR4__(v868, 8);
          *(v61 - 5) = v870;
          v870 = __ROR4__(v870, 8);
          *(v61 - 1) = v868;
          v868 = __ROR4__(v868, 8);
          *(v61 - 6) = v870;
          v870 = __ROR4__(v870, 8);
          *(v61 - 2) = v868;
          v868 = __ROR4__(v868, 8);
          *(v61 - 7) = v870;
          *(v61 - 3) = v868;
          v61 += 8;
          v55 = __ROR4__(v870, 8);
          v60 = __ROR4__(v868, 8);
          v89 = Src == (void *)1;
          Src = (char *)Src - 1;
          v870 = v55;
          v868 = v60;
          v875 = v891;
          v873 = v88;
          if ( v89 )
            break;
          LODWORD(v36) = v1297;
          v62 = (unsigned __int8 *)v883;
        }
        Acl = v911;
        v31 = -1;
        v37 = (SIZE_T)v902;
      }
      v90 = 0LL;
      if ( v37 )
      {
        if ( v37 < 0x20 )
        {
          v100 = v874[0];
        }
        else
        {
          v91 = 0LL;
          v92 = 0LL;
          v93 = (const __m128i *)((char *)P + 16);
          do
          {
            v94 = _mm_loadu_si128(v93 - 1);
            v90 += 32LL;
            v93 += 2;
            v91 = _mm_xor_si128(v94, v91);
            v95 = _mm_xor_si128(_mm_loadu_si128(v93 - 2), v92);
            v92 = v95;
          }
          while ( v90 < v37 - (v37 & 0x1F) );
          v96 = _mm_xor_si128(v91, v95);
          v97 = _mm_xor_si128(v96, _mm_srli_si128(v96, 8));
          v98 = _mm_xor_si128(v97, _mm_srli_si128(v97, 4));
          v99 = _mm_xor_si128(v98, _mm_srli_si128(v98, 2));
          v100 = _mm_cvtsi128_si32(_mm_xor_si128(v99, _mm_srli_si128(v99, 1)));
          v874[0] = v100;
        }
        if ( v90 < v37 )
        {
          do
            LOBYTE(v100) = *((_BYTE *)P + v90++) ^ v100;
          while ( v90 < v37 );
          v874[0] = v100;
        }
      }
      if ( LOBYTE(v874[0]) == *(_QWORD *)(v37 + v1023) )
      {
        v101 = (unsigned int *)P;
        v1038 = P;
        v1175 = v37;
        v1036 = 0LL;
        v963 = v37;
        goto LABEL_139;
      }
      ExFreePoolWithTag(P, 0x20534C53u);
    }
    v30 = v1036;
  }
  Acl = -1073741823;
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0x20534C53u);
    v1036 = 0LL;
  }
  v101 = (unsigned int *)v1038;
  LODWORD(v37) = v963;
LABEL_139:
  if ( Acl < 0 )
    goto LABEL_2087;
  if ( (unsigned int)v37 < 4 )
  {
    Acl = -1073741762;
LABEL_142:
    v5 = v866;
    goto LABEL_2088;
  }
  v890 = *v101;
  if ( v101 + 1 < v101 )
  {
LABEL_2082:
    v5 = v866;
    Acl = -1073741675;
    goto LABEL_2088;
  }
  if ( (unsigned int)(v37 - 4) < 4 )
  {
    v5 = v866;
    Acl = -1073741762;
    goto LABEL_2088;
  }
  v102 = v101[1];
  v103 = (char *)(v101 + 2);
  if ( v101 + 2 < v101 + 1 )
    goto LABEL_150;
  if ( (int)v37 - 8 < (unsigned int)v102 )
  {
    v5 = v866;
    Acl = -1073741762;
    goto LABEL_2088;
  }
  if ( (unsigned int)v102 >= 0xFFFFFFF8 )
    goto LABEL_150;
  if ( (char *)v101 + (unsigned int)v37 < &v103[v102] || (unsigned int)v37 - 8LL - v102 >= 8 )
  {
    Acl = -1073741762;
    goto LABEL_180;
  }
  v104 = 0LL;
  Acl = 0;
  v105 = 0;
  if ( v101 == (unsigned int *)-8LL )
    goto LABEL_169;
  v106 = (unsigned __int64)&v103[v102];
  v107 = (char *)(v101 + 2);
  if ( &v103[v102] < v103 )
  {
LABEL_168:
    Acl = -1073741675;
    goto LABEL_180;
  }
  if ( (unsigned __int64)v103 < v106 )
  {
    v108 = v1112;
    while ( v107 + 4 >= v107 )
    {
      if ( (unsigned __int64)(v107 + 4) > v106 )
        goto LABEL_167;
      if ( *(_DWORD *)v107 >= 0xFFFFFFFC )
      {
        Acl = -1073741675;
      }
      else
      {
        v108 = *(_DWORD *)v107 + 4;
        v1112 = v108;
        Acl = 0;
      }
      if ( Acl < 0 )
        goto LABEL_2087;
      v109 = &v107[v108];
      if ( v109 < v107 )
        goto LABEL_168;
      v107 += v108;
      Acl = 0;
      if ( (unsigned __int64)v109 > v106 )
        goto LABEL_167;
      ++v105;
      if ( (unsigned __int64)v109 >= v106 )
        goto LABEL_166;
    }
    goto LABEL_168;
  }
LABEL_166:
  if ( v107 == (char *)v106 )
  {
LABEL_169:
    if ( (_DWORD)v102 )
    {
      v104 = ExAllocatePoolWithTag(PagedPool, v102, 0x20534C53u);
      if ( !v104 )
      {
        Acl = -1073741801;
        goto LABEL_176;
      }
      Acl = 0;
    }
    if ( v103 )
      memmove(v104, v103, v102);
    v867[1] = v104;
    v867[0] = __PAIR64__(v102, v105);
LABEL_176:
    if ( Acl >= 0 )
    {
      if ( v890 == LODWORD(v867[0]) )
        goto LABEL_180;
      Acl = -1073741762;
    }
LABEL_2087:
    v5 = v866;
    goto LABEL_2088;
  }
LABEL_167:
  Acl = -1073741811;
LABEL_180:
  if ( Acl < 0 )
    goto LABEL_2087;
  if ( v867[1] )
  {
    if ( LODWORD(v867[0]) )
    {
      v110 = *(_DWORD *)v867[1];
      v111 = (_DWORD *)(v867[1] + 4LL);
      if ( (unsigned __int64)(v867[1] + 4LL) < v867[1] )
      {
        Acl = -1073741675;
      }
      else
      {
        v1222 = *(_DWORD *)v867[1];
        Acl = 0;
        if ( !v110 )
          v111 = 0LL;
        v1249 = v111;
        if ( v110 != 4 )
        {
          Acl = -1073741789;
LABEL_190:
          v5 = 0LL;
          goto LABEL_2088;
        }
        v1172 = *v111;
      }
    }
    else
    {
      Acl = -1073741811;
    }
  }
  else
  {
    Acl = -1073741811;
  }
  if ( Acl < 0 )
    goto LABEL_2087;
  if ( !v867[1] )
  {
    v5 = v866;
    Acl = -1073741811;
    v867[0] = 0LL;
    goto LABEL_2090;
  }
  if ( LODWORD(v867[0]) <= 1 )
  {
    v5 = v866;
    Acl = -1073741811;
    goto LABEL_2088;
  }
  v112 = (unsigned int *)v867[1];
  v113 = 0;
  do
  {
    v114 = *v112;
    v115 = v112 + 1;
    if ( v112 + 1 < v112 )
      goto LABEL_2082;
    v112 = (unsigned int *)((char *)v115 + v114);
    if ( (unsigned int *)((char *)v115 + v114) < v115 )
      goto LABEL_150;
    ++v113;
  }
  while ( !v113 );
  v116 = *v112;
  v117 = v112 + 1;
  if ( v112 + 1 < v112 )
  {
LABEL_150:
    v5 = v866;
    Acl = -1073741675;
    goto LABEL_2088;
  }
  v1085 = *v112;
  if ( !(_DWORD)v116 )
    v117 = 0LL;
  v1203 = v117;
  if ( LODWORD(v867[0]) <= 2 )
  {
    v5 = v866;
    Acl = -1073741811;
    goto LABEL_2088;
  }
  v118 = (unsigned int *)v867[1];
  for ( j = 0; j < 2; ++j )
  {
    v120 = *v118;
    v121 = v118 + 1;
    if ( v118 + 1 < v118 )
      goto LABEL_150;
    v118 = (unsigned int *)((char *)v121 + v120);
    if ( (unsigned int *)((char *)v121 + v120) < v121 )
      goto LABEL_150;
  }
  v122 = *v118;
  v123 = v118 + 1;
  if ( v118 + 1 < v118 )
  {
    Acl = -1073741675;
    goto LABEL_2087;
  }
  v1044 = *v118;
  if ( !(_DWORD)v122 )
    v123 = 0LL;
  v1225 = v123;
  v124 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
  if ( !v124 )
  {
    v126 = (unsigned int *)v972;
    Acl = -1073741801;
    goto LABEL_237;
  }
  *v124 = 0LL;
  Acl = 0;
  v124[1] = 0LL;
  v124[2] = 0LL;
  v124[3] = 0LL;
  v124[4] = 0LL;
  v124[5] = 0LL;
  *(_DWORD *)v124 = 0;
  v124[1] = 0LL;
  if ( !v117 )
  {
    *((_DWORD *)v124 + 4) = 0;
    v124[3] = 0LL;
    goto LABEL_222;
  }
  *((_DWORD *)v124 + 4) = v116;
  if ( (_DWORD)v116 )
  {
    v127 = ExAllocatePoolWithTag(PagedPool, v116, 0x20534C53u);
    if ( !v127 )
      goto LABEL_226;
    v124[3] = v127;
    memmove(v127, v117, v116);
LABEL_222:
    if ( v123 )
    {
      *((_DWORD *)v124 + 8) = v122;
      if ( !(_DWORD)v122 )
      {
        Acl = -1073741762;
        goto LABEL_227;
      }
      v128 = ExAllocatePoolWithTag(PagedPool, v122, 0x20534C53u);
      if ( !v128 )
      {
LABEL_226:
        Acl = -1073741801;
        goto LABEL_227;
      }
      v124[5] = v128;
      Acl = 0;
      memmove(v128, v123, v122);
    }
    else
    {
      *((_DWORD *)v124 + 8) = 0;
      v124[5] = 0LL;
    }
    v126 = (unsigned int *)v124;
    v972 = v124;
    goto LABEL_237;
  }
  Acl = -1073741762;
LABEL_227:
  v129 = (void *)v124[1];
  if ( v129 )
  {
    ExFreePoolWithTag(v129, 0x20534C53u);
    v124[1] = 0LL;
  }
  v130 = (void *)v124[3];
  if ( v130 )
  {
    ExFreePoolWithTag(v130, 0x20534C53u);
    v124[3] = 0LL;
  }
  v131 = (void *)v124[5];
  if ( v131 )
  {
    ExFreePoolWithTag(v131, 0x20534C53u);
    v124[5] = 0LL;
  }
  ExFreePoolWithTag(v124, 0x20534C53u);
  v126 = (unsigned int *)v972;
LABEL_237:
  if ( Acl < 0 )
    goto LABEL_2087;
  switch ( v1172 )
  {
    case 0:
      SourceString = 0LL;
      v132 = 0LL;
      v947 = 0;
      v133 = 0;
      v893 = 0;
      *(_QWORD *)&v874[1] = 0LL;
      Timeout.QuadPart = 0LL;
      if ( !v126 )
      {
        Acl = -1073741811;
        v5 = 0LL;
        goto LABEL_2088;
      }
      if ( v867[1] )
      {
        if ( LODWORD(v867[0]) > 3 )
        {
          v135 = v867[1];
          pullResult = v867[1];
          do
          {
            v134 = RtlULongLongAdd(v135, 4uLL, &pullResult);
            if ( v134 < 0 )
              goto LABEL_253;
            v134 = RtlULongLongAdd(pullResult, v136, &pullResult);
            if ( v134 < 0 )
              goto LABEL_253;
            v135 = pullResult;
          }
          while ( (unsigned int)(v137 + 1) < 3 );
          v134 = RtlULongLongAdd(pullResult, 4uLL, &pullResult);
          if ( v134 < 0 )
          {
LABEL_253:
            v138 = v1045;
            v139 = v1205;
          }
          else
          {
            v139 = (_QWORD *)pullResult;
            v1045 = v138;
            if ( !v138 )
              v139 = 0LL;
            v1205 = v139;
          }
          if ( v134 < 0 )
            goto LABEL_534;
          if ( v138 != 8 )
          {
            Acl = -1073741789;
            v140 = 1;
            goto LABEL_756;
          }
          v1237 = *v139;
        }
        else
        {
          v134 = -1073741811;
        }
      }
      else
      {
        v134 = -1073741811;
      }
      if ( v134 >= 0 )
      {
        if ( v867[1] )
        {
          if ( LODWORD(v867[0]) > 4 )
          {
            v141 = v867[1];
            v957 = v867[1];
            do
            {
              v134 = RtlULongLongAdd(v141, 4uLL, &v957);
              if ( v134 < 0 )
                goto LABEL_271;
              v134 = RtlULongLongAdd(v957, v142, &v957);
              if ( v134 < 0 )
                goto LABEL_271;
              v141 = v957;
            }
            while ( (unsigned int)(v143 + 1) < 4 );
            v134 = RtlULongLongAdd(v957, 4uLL, &v957);
            if ( v134 < 0 )
            {
LABEL_271:
              v144 = v979;
              v145 = psz;
            }
            else
            {
              v145 = (const wchar_t *)v957;
              v979 = v144;
              if ( !v144 )
                v145 = 0LL;
              psz = v145;
            }
            if ( v134 < 0 )
              goto LABEL_530;
            if ( !v144 )
            {
              v134 = -1073741762;
              goto LABEL_290;
            }
            if ( (v144 & 1) != 0 )
            {
              v134 = -1073741762;
              goto LABEL_290;
            }
            if ( v145[((unsigned __int64)v144 >> 1) - 1] )
            {
              v134 = -1073741762;
              goto LABEL_290;
            }
            if ( StringCbLengthW(v145, v144, &pcbLength) < 0 )
            {
              v134 = -1073741762;
              goto LABEL_290;
            }
            if ( pcbLength + 2 != v979 )
            {
              v134 = -1073741762;
              goto LABEL_290;
            }
            v1207 = (void *)psz;
            v981 = pcbLength >> 1;
          }
          else
          {
            v134 = -1073741811;
          }
        }
        else
        {
          v134 = -1073741811;
        }
        if ( v134 < 0 )
          goto LABEL_530;
        v146 = 2 * v981 + 2;
        if ( 2 * v981 == -2 )
        {
          v134 = -1073741762;
        }
        else
        {
          v147 = v146;
          v148 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v146, 0x20534C53u);
          v149 = v148;
          if ( v148 )
          {
            v134 = 0;
            memmove(v148, v1207, v147);
            v1026 = v981;
            SourceString = v149;
          }
          else
          {
            v134 = -1073741801;
          }
        }
LABEL_290:
        if ( v134 >= 0 )
        {
          if ( v867[1] )
          {
            if ( LODWORD(v867[0]) > 5 )
            {
              v150 = v867[1];
              v943 = v867[1];
              do
              {
                v134 = RtlULongLongAdd(v150, 4uLL, &v943);
                if ( v134 < 0 )
                  goto LABEL_303;
                v134 = RtlULongLongAdd(v943, v151, &v943);
                if ( v134 < 0 )
                  goto LABEL_303;
                v150 = v943;
              }
              while ( (unsigned int)(v152 + 1) < 5 );
              v134 = RtlULongLongAdd(v943, 4uLL, &v943);
              if ( v134 < 0 )
              {
LABEL_303:
                v153 = v1048;
                v154 = v1227;
              }
              else
              {
                v154 = (_DWORD *)v943;
                v1048 = v153;
                if ( !v153 )
                  v154 = 0LL;
                v1227 = v154;
              }
              if ( v134 < 0 )
                goto LABEL_530;
              if ( v153 != 4 )
              {
                v134 = -1073741789;
                goto LABEL_530;
              }
              v1165 = *v154;
            }
            else
            {
              v134 = -1073741811;
            }
          }
          else
          {
            v134 = -1073741811;
          }
          if ( v134 >= 0 )
          {
            if ( v867[1] )
            {
              if ( LODWORD(v867[0]) > 6 )
              {
                v155 = v867[1];
                v915 = v867[1];
                do
                {
                  v134 = RtlULongLongAdd(v155, 4uLL, &v915);
                  if ( v134 < 0 )
                    goto LABEL_321;
                  v134 = RtlULongLongAdd(v915, v156, &v915);
                  if ( v134 < 0 )
                    goto LABEL_321;
                  v155 = v915;
                }
                while ( (unsigned int)(v157 + 1) < 6 );
                v134 = RtlULongLongAdd(v915, 4uLL, &v915);
                if ( v134 < 0 )
                {
LABEL_321:
                  v158 = v1072;
                  v159 = v1209;
                }
                else
                {
                  v159 = (UINT *)v915;
                  v1072 = v158;
                  if ( !v158 )
                    v159 = 0LL;
                  v1209 = v159;
                }
                if ( v134 < 0 )
                  goto LABEL_530;
                if ( v158 != 4 )
                {
                  v134 = -1073741789;
                  goto LABEL_530;
                }
                NumberOfBytes = *v159;
              }
              else
              {
                v134 = -1073741811;
              }
            }
            else
            {
              v134 = -1073741811;
            }
            if ( v134 >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, SourceString);
              v160 = NumberOfBytes;
              if ( NumberOfBytes )
              {
                v161 = 1;
                if ( NumberOfBytes <= 0x100000 )
                {
LABEL_339:
                  *(_QWORD *)&v874[1] = ExAllocatePoolWithTag(PagedPool, v160, 0x20534C53u);
                  if ( !*(_QWORD *)&v874[1] )
                  {
                    v134 = -1073741801;
                    v132 = 0LL;
                    goto LABEL_530;
                  }
                  v165 = sub_14051D560(
                           (unsigned int)&DestinationString,
                           (unsigned int)&v947,
                           v874[1],
                           v160,
                           (__int64)&v893);
                  v905 = v165;
                  v163 = v165;
                  if ( v165 != -1073741789 )
                  {
                    v134 = v165;
                    if ( v165 < 0 )
                      goto LABEL_529;
                  }
                  if ( v160 >= v893 )
                    v160 = v893;
                  v903 = v160;
LABEL_348:
                  v166 = 8;
                  v964 = 8;
                  if ( v160 >= 0xFFFFFFFC )
                  {
                    v134 = -1073741675;
                  }
                  else
                  {
                    v166 = v160 + 4;
                    v964 = v160 + 4;
                    v134 = 0;
                  }
                  if ( v134 < 0 )
                  {
                    v169 = v1026;
                    v986 = v1026;
                  }
                  else
                  {
                    v167 = v166 + 28;
                    if ( v167 < 0x1C )
                      goto LABEL_528;
                    v964 = 8;
                    v168 = v167 + 8;
                    if ( v167 + 8 < v167 )
                      goto LABEL_528;
                    v964 = 8;
                    v169 = v167 + 16;
                    v986 = v168 + 8;
                    if ( v168 + 8 < v168 )
                      goto LABEL_528;
                    v134 = 0;
                  }
                  if ( v134 < 0 )
                    goto LABEL_529;
                  v170 = v169 + 8;
                  if ( v169 >= 0xFFFFFFF8 )
                  {
                    v1108 = -1;
                    goto LABEL_528;
                  }
                  v1108 = v169 + 8;
                  v171 = (v169 + 15) & 0xFFFFFFF8;
                  if ( v171 >= v170 )
                  {
                    v172 = v171 + 8;
                    if ( v171 + 8 < v171 )
                    {
                      v1076 = -1;
                      goto LABEL_371;
                    }
                    v1076 = v171 + 8;
                    v134 = 0;
                  }
                  else
                  {
                    v172 = v1026;
                    v134 = -1073741675;
                  }
                  if ( v134 < 0 )
                    goto LABEL_529;
                  v173 = v126[8];
                  v174 = v172 + 4;
                  v175 = v126[4];
                  if ( v174 >= 4 )
                  {
                    v176 = v174 + 4;
                    if ( v174 + 4 >= v174 )
                    {
                      v177 = v176 + v175;
                      if ( v176 + v175 >= v176 )
                      {
                        v178 = v177 + 4;
                        if ( v177 + 4 >= v177 && v178 + v173 >= v178 )
                        {
                          v134 = 0;
                          v1232 = v178 + v173;
                          v891 = v178 + v173;
                          goto LABEL_372;
                        }
                      }
                    }
                  }
LABEL_371:
                  v134 = -1073741675;
LABEL_372:
                  if ( v134 >= 0 )
                  {
                    if ( v885 < v891 || v163 < 0 )
                      goto LABEL_413;
                    v179 = 1;
                    RtlInitUnicodeString(&v1255, L"Security-SPP-GenuineLocalStatus");
                    v180 = sub_14051D560(
                             (unsigned int)&v1255,
                             (unsigned int)&v1126,
                             (unsigned int)&v1169,
                             4,
                             (__int64)v1198);
                    v134 = v180;
                    if ( v180 == -1073741772 )
                    {
                      v898 = 0;
                    }
                    else
                    {
                      if ( v180 >= 0 && (v1126 != 4 || !v1169) )
                        v179 = 0;
                      v898 = v179;
                      if ( v180 < 0 )
                        goto LABEL_529;
                    }
                    v181 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 0, &Timeout);
                    if ( v181 < 0 || v181 == 192 || v181 == 258 )
                    {
LABEL_413:
                      v185 = 0;
                    }
                    else
                    {
                      v182 = v898;
                      if ( g_ulOldGenuineState != v898 )
                      {
                        if ( v898 )
                        {
                          KeResetEvent(&stru_140324640);
                        }
                        else
                        {
                          v183 = MEMORY[0xFFFFF78000000320];
                          qword_14077E1F8 = v183 * KeQueryTimeIncrement() / 10000;
                        }
                        v182 = v898;
                      }
                      v184 = MEMORY[0xFFFFF78000000320];
                      g_ulOldGenuineState = v182;
                      v185 = 0;
                      v186 = (unsigned __int64)(v184 * KeQueryTimeIncrement() / 10000 - qword_14077E1F8) >= 0xADF4FC;
                      if ( !v898 && v186 && dword_14077E1C8 )
                      {
                        KeSetEvent(&stru_140324640, 1, 0);
                        v978 = 4;
                        v1098 = 0;
                        KeyHandle = 0LL;
                        v187 = ZwOpenKey(&KeyHandle, 1u, &stru_14077E7F8);
                        if ( v187 < 0 )
                        {
                          v187 = sub_14051D560(
                                   (unsigned int)aBd,
                                   (unsigned int)&v978,
                                   (unsigned int)&v945,
                                   4,
                                   (__int64)&v1098);
                          v188 = v945;
                        }
                        else
                        {
                          v188 = 3;
                          v945 = 3;
                        }
                        if ( v187 < 0 || v978 != 4 || (unsigned int)(v188 - 1) > 2 )
                        {
                          v188 = 1;
                          v945 = 1;
                        }
                        if ( KeyHandle )
                        {
                          ZwClose(KeyHandle);
                          KeyHandle = 0LL;
                        }
                        v984 = 0;
                        v1301 = 0LL;
                        v1300 = 0;
                        v1012 = 0;
                        if ( (int)sub_14051D560(
                                    (unsigned int)aLn,
                                    (unsigned int)&v984,
                                    (unsigned int)&v1300,
                                    12,
                                    (__int64)&v1012) >= 0
                          && v984 == 3
                          && v1012 == 12 )
                        {
                          v189 = 0;
                          v190 = (unsigned int *)&v1300;
                          while ( 1 )
                          {
                            v191 = *v190;
                            if ( (*v190 & 0xF) == v188 )
                              break;
                            ++v189;
                            ++v190;
                            if ( v189 >= 3 )
                              goto LABEL_408;
                          }
                        }
                        else
                        {
LABEL_408:
                          v191 = dword_14077E06C & 0xFFFF0000 | 0x3211;
                        }
                        dword_14077E06C = v191;
                        if ( v1165 )
                        {
                          v160 = v903;
                          v133 = v191;
                        }
                        else
                        {
                          KeReleaseMutex(&Mutex, 0);
                          v160 = v903;
                        }
                      }
                      else
                      {
                        KeReleaseMutex(&Mutex, 0);
                      }
                    }
                    uAugend[0] = v986;
                    if ( !v986 )
                    {
                      v134 = -1073741762;
                      goto LABEL_529;
                    }
                    v192 = ExAllocatePoolWithTag(PagedPool, v986, 0x20534C53u);
                    if ( !v192 )
                    {
                      v134 = -1073741801;
                      goto LABEL_529;
                    }
                    *(_QWORD *)&uAugend[1] = v192;
                    v193 = 0;
                    v864 = 0;
                    v1015 = v905 | 0x10000000;
                    if ( &v1015 )
                    {
                      v134 = RtlULongLongAdd((ULONGLONG)v192, 4uLL, v1270);
                      if ( v134 >= 0 )
                      {
                        if ( v195 + 2 > (_DWORD *)((char *)v195 + uAugend[0]) )
                        {
                          v134 = -1073741789;
                          goto LABEL_529;
                        }
                        v196 = (int *)v1270[0];
                        *v195 = v194;
                        *v196 = v1015;
                        v193 = ++v864;
                      }
                    }
                    else
                    {
                      v134 = -1073741811;
                    }
                    if ( v134 < 0 )
                      goto LABEL_529;
                    v1179 = v1237;
                    if ( &v1179 )
                    {
                      if ( !*(_QWORD *)&uAugend[1] )
                      {
                        v988 = 12;
                        if ( uAugend[0] + 12 >= uAugend[0] )
                        {
                          ++v193;
                          uAugend[0] += 12;
                          v864 = v193;
                          goto LABEL_446;
                        }
                        uAugend[0] = -1;
LABEL_528:
                        v134 = -1073741675;
                        goto LABEL_529;
                      }
                      v197 = *(_DWORD **)&uAugend[1];
                      v1103 = *(_QWORD *)&uAugend[1];
                      if ( v193 )
                      {
                        v198 = v988;
                        do
                        {
                          if ( *v197 >= 0xFFFFFFFC )
                          {
                            v134 = -1073741675;
                          }
                          else
                          {
                            v198 = *v197 + 4;
                            v134 = 0;
                            v988 = v198;
                          }
                          if ( v134 < 0 )
                            goto LABEL_529;
                          v134 = RtlULongLongAdd((ULONGLONG)v197, v198, &v1103);
                          if ( v134 < 0 )
                            goto LABEL_444;
                          v197 = (_DWORD *)v1103;
                        }
                        while ( v199 + 1 < v193 );
                      }
                      v134 = RtlULongLongAdd((ULONGLONG)v197, 4uLL, &v1254);
                      if ( v134 >= 0 )
                      {
                        if ( (unsigned __int64)(v200 + 3) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                        {
                          v134 = -1073741789;
                          goto LABEL_529;
                        }
                        v201 = (_QWORD *)v1254;
                        *v200 = 8;
                        *v201 = v1179;
                        v193 = ++v864;
                      }
                    }
                    else
                    {
                      v134 = -1073741811;
                    }
LABEL_444:
                    if ( v134 < 0 )
                      goto LABEL_529;
                    v185 = 0;
LABEL_446:
                    v1014 = v947;
                    if ( &v1014 )
                    {
                      if ( *(_QWORD *)&uAugend[1] )
                      {
                        v205 = *(UINT **)&uAugend[1];
                        v1105 = *(_QWORD *)&uAugend[1];
                        if ( v193 )
                        {
                          while ( 1 )
                          {
                            v206 = RtlUIntAdd(4u, *v205, &v1138);
                            v134 = v206;
                            if ( v206 >= 0 )
                              v207 = v1138;
                            v923 = v207;
                            if ( v206 < 0 )
                              break;
                            v134 = RtlULongLongAdd(v208, v207, &v1105);
                            if ( v134 < 0 )
                              break;
                            v205 = (UINT *)v1105;
                            if ( ++v185 >= v193 )
                              goto LABEL_459;
                          }
                        }
                        else
                        {
LABEL_459:
                          v134 = RtlULongLongAdd((ULONGLONG)v205, 4uLL, v1285);
                          if ( v134 >= 0 )
                          {
                            if ( (unsigned __int64)(v210 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                            {
                              v134 = -1073741789;
                              goto LABEL_529;
                            }
                            v211 = (_DWORD *)v1285[0];
                            *v210 = v209;
                            *v211 = v1014;
                            v193 = ++v864;
                          }
                        }
                      }
                      else
                      {
                        v202 = RtlUIntAdd(4u, 4u, &puResult);
                        v203 = v923;
                        v134 = v202;
                        if ( v202 >= 0 )
                          v203 = puResult;
                        v923 = v203;
                        if ( v202 >= 0 )
                        {
                          v204 = RtlUIntAdd(uAugend[0], v203, uAugend);
                          v193 = v864;
                          v134 = v204;
                          if ( v204 >= 0 )
                          {
                            v193 = ++v864;
                            goto LABEL_465;
                          }
                        }
                      }
                    }
                    else
                    {
                      v134 = -1073741811;
                    }
                    if ( v134 < 0 )
                      goto LABEL_529;
LABEL_465:
                    if ( *(_QWORD *)&v874[1] )
                    {
                      if ( !v160 )
                        goto LABEL_467;
                    }
                    else if ( v160 )
                    {
LABEL_467:
                      v134 = -1073741811;
                      goto LABEL_468;
                    }
                    if ( *(_QWORD *)&uAugend[1] )
                    {
                      v218 = *(UINT **)&uAugend[1];
                      v1107 = *(_QWORD *)&uAugend[1];
                      v219 = 0;
                      if ( v193 )
                      {
                        while ( 1 )
                        {
                          v220 = RtlUIntAdd(4u, *v218, &v1157);
                          v134 = v220;
                          if ( v220 >= 0 )
                            v221 = v1157;
                          v960 = v221;
                          if ( v220 < 0 )
                            break;
                          v134 = RtlULongLongAdd(v222, v221, &v1107);
                          if ( v134 < 0 )
                            break;
                          v218 = (UINT *)v1107;
                          if ( ++v219 >= v193 )
                            goto LABEL_489;
                        }
                      }
                      else
                      {
LABEL_489:
                        v134 = RtlULongLongAdd((ULONGLONG)v218, 4uLL, v1256);
                        if ( v134 >= 0 )
                        {
                          if ( (unsigned __int64)v224 + v160 + 4 > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                          {
                            v134 = -1073741789;
                            goto LABEL_529;
                          }
                          *v224 = v160;
                          if ( v223 )
                            memmove((void *)v1256[0], v223, v160);
                          v193 = ++v864;
                        }
                      }
                    }
                    else
                    {
                      v215 = RtlUIntAdd(4u, v160, &v1102);
                      v216 = v960;
                      v134 = v215;
                      if ( v215 >= 0 )
                        v216 = v1102;
                      v960 = v216;
                      if ( v215 >= 0 )
                      {
                        v217 = RtlUIntAdd(uAugend[0], v216, uAugend);
                        v193 = v864;
                        v134 = v217;
                        if ( v217 >= 0 )
                        {
                          v193 = ++v864;
                          goto LABEL_469;
                        }
                      }
                    }
LABEL_468:
                    if ( v134 < 0 )
                      goto LABEL_529;
LABEL_469:
                    NumberOfBytes_4 = v893;
                    if ( &NumberOfBytes_4 )
                    {
                      if ( *(_QWORD *)&uAugend[1] )
                      {
                        v225 = *(UINT **)&uAugend[1];
                        v1109 = *(_QWORD *)&uAugend[1];
                        v226 = 0;
                        if ( v193 )
                        {
                          while ( 1 )
                          {
                            v227 = RtlUIntAdd(4u, *v225, &v1141);
                            v134 = v227;
                            if ( v227 >= 0 )
                              v228 = v1141;
                            v925 = v228;
                            if ( v227 < 0 )
                              break;
                            v134 = RtlULongLongAdd(v229, v228, &v1109);
                            if ( v134 < 0 )
                              break;
                            v225 = (UINT *)v1109;
                            if ( ++v226 >= v193 )
                              goto LABEL_501;
                          }
                        }
                        else
                        {
LABEL_501:
                          v134 = RtlULongLongAdd((ULONGLONG)v225, 4uLL, v1272);
                          if ( v134 >= 0 )
                          {
                            if ( (unsigned __int64)(v231 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                            {
                              v134 = -1073741789;
                              goto LABEL_529;
                            }
                            v232 = (UINT *)v1272[0];
                            *v231 = v230;
                            *v232 = NumberOfBytes_4;
                            v193 = ++v864;
                          }
                        }
                      }
                      else
                      {
                        v212 = RtlUIntAdd(4u, 4u, &uAddend);
                        v213 = v925;
                        v134 = v212;
                        if ( v212 >= 0 )
                          v213 = uAddend;
                        v925 = v213;
                        if ( v212 >= 0 )
                        {
                          v214 = RtlUIntAdd(uAugend[0], v213, uAugend);
                          v193 = v864;
                          v134 = v214;
                          if ( v214 >= 0 )
                          {
                            v193 = ++v864;
                            goto LABEL_507;
                          }
                        }
                      }
                    }
                    else
                    {
                      v134 = -1073741811;
                    }
                    if ( v134 < 0 )
                      goto LABEL_529;
LABEL_507:
                    v1017 = v133;
                    if ( &v1017 )
                    {
                      if ( *(_QWORD *)&uAugend[1] )
                      {
                        v235 = *(UINT **)&uAugend[1];
                        v1111 = *(_QWORD *)&uAugend[1];
                        v236 = 0;
                        if ( v193 )
                        {
                          while ( 1 )
                          {
                            v237 = RtlUIntAdd(4u, *v235, &v1173);
                            v134 = v237;
                            if ( v237 >= 0 )
                              v238 = v1173;
                            v949 = v238;
                            if ( v237 < 0 )
                              break;
                            v134 = RtlULongLongAdd(v239, v238, &v1111);
                            if ( v134 < 0 )
                              break;
                            v235 = (UINT *)v1111;
                            if ( ++v236 >= v240 )
                              goto LABEL_520;
                          }
                        }
                        else
                        {
LABEL_520:
                          v134 = RtlULongLongAdd((ULONGLONG)v235, 4uLL, v1258);
                          if ( v134 >= 0 )
                          {
                            if ( (unsigned __int64)(v242 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                            {
                              v134 = -1073741789;
                              goto LABEL_529;
                            }
                            v243 = (unsigned int *)v1258[0];
                            *v242 = v241;
                            *v243 = v1017;
                            ++v864;
                          }
                        }
                      }
                      else
                      {
                        v233 = RtlUIntAdd(4u, 4u, &v1106);
                        v234 = v949;
                        v134 = v233;
                        if ( v233 >= 0 )
                          v234 = v1106;
                        v949 = v234;
                        if ( v233 >= 0 )
                        {
                          v134 = RtlUIntAdd(uAugend[0], v234, uAugend);
                          if ( v134 >= 0 )
                          {
                            ++v864;
                            v134 = 0;
                            goto LABEL_529;
                          }
                        }
                      }
                    }
                    else
                    {
                      v134 = -1073741811;
                    }
                    if ( v134 >= 0 )
                      v134 = 0;
                  }
LABEL_529:
                  v132 = *(void **)&v874[1];
                  goto LABEL_530;
                }
              }
              else
              {
                v161 = 0;
              }
              v903 = NumberOfBytes;
              v162 = sub_14051D560((unsigned int)&DestinationString, (unsigned int)&v947, 0, 0, (__int64)&v893);
              v905 = v162;
              v163 = v162;
              if ( v162 == -1073741789 )
              {
                v164 = v893;
                if ( NumberOfBytes < v893 )
                {
                  if ( !NumberOfBytes )
                  {
                    v163 = 0;
                    v905 = 0;
                  }
                  goto LABEL_348;
                }
              }
              else
              {
                if ( v162 < 0 )
                {
                  v134 = v162;
                  v132 = 0LL;
                  goto LABEL_530;
                }
                v164 = v893;
                if ( v893 )
                {
                  v134 = -2147418113;
                  v132 = 0LL;
                  goto LABEL_530;
                }
                v161 = 0;
              }
              v903 = v164;
              v163 = 0;
              v905 = 0;
              v160 = v164;
              if ( !v161 )
                goto LABEL_348;
              goto LABEL_339;
            }
          }
        }
LABEL_530:
        if ( SourceString )
        {
          ExFreePoolWithTag((PVOID)SourceString, 0x20534C53u);
          SourceString = 0LL;
        }
        if ( v132 )
          ExFreePoolWithTag(v132, 0x20534C53u);
      }
LABEL_534:
      Acl = v134;
      v140 = v134 < 0;
      goto LABEL_756;
    case 1:
      v244 = SeExports;
      v245 = RtlLengthSid(SeExports->SeNetworkServiceSid);
      v246 = RtlLengthSid(v244->SeLocalServiceSid) + v245;
      v247 = v246 + RtlLengthSid(v244->SeAliasAdminsSid) + 32;
      v248 = (ACL *)ExAllocatePoolWithTag(PagedPool, v247, 0x20534C53u);
      v249 = v248;
      if ( !v248 )
      {
        Acl = -1073741801;
        goto LABEL_537;
      }
      Acl = RtlCreateAcl(v248, v247, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v249, 2u, 0x20u, SeExports->SeLocalServiceSid);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v249, 2u, 0x20u, SeExports->SeNetworkServiceSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v249, 2u, 0x20u, SeExports->SeAliasAdminsSid);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v249, 0);
                if ( Acl >= 0 )
                {
                  SeCaptureSubjectContext(&SubjectContext);
                  v254 = SeAccessCheck(
                           SecurityDescriptor,
                           &SubjectContext,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           &GrantedAccess,
                           &AccessStatus);
                  SeReleaseSubjectContext(&SubjectContext);
                  if ( !v254 )
                    Acl = AccessStatus;
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v249, 0x20534C53u);
      if ( Acl < 0 )
        goto LABEL_537;
      ReturnLength = 0;
      v1114 = 0;
      SystemInformation = 8;
      Acl = 0;
      v255 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
      v256 = v255 >= 0 && (v1114 & 0x20) != 0;
      v257 = v255 >= 0 && (v1114 & 0x100) != 0;
      v258 = (const void **)v872;
      v259 = *((_DWORD *)v872 + 4);
      if ( v259 != 160 )
        goto LABEL_570;
      if ( memcmp(qword_140724C70, *((const void **)v872 + 3), 0xA0uLL) || v126[4] != 160 )
        goto LABEL_569;
      v89 = memcmp(&byte_140724F90, *((const void **)v126 + 3), 0xA0uLL) == 0;
      v258 = (const void **)v872;
      if ( !v89 || *((_DWORD *)v872 + 8) != 8 )
        goto LABEL_570;
      if ( **((_QWORD **)v872 + 5) == 0xE4352C9886F9E8BLL
        && v126[8] == 8
        && **((_QWORD **)v126 + 5) == 0x5DB1C4D7175ECA31LL )
      {
        goto LABEL_581;
      }
LABEL_569:
      v258 = (const void **)v872;
LABEL_570:
      if ( !v256 && !v257
        || v259 != 160
        || memcmp(sub_140724E50, v258[3], 0xA0uLL)
        || v126[4] != 160
        || memcmp(&byte_1407248B0, *((const void **)v126 + 3), 0xA0uLL)
        || *((_DWORD *)v872 + 8) != 8
        || **((_QWORD **)v872 + 5) != 0x2CA5387272CA1419LL
        || v126[8] != 8
        || **((_QWORD **)v126 + 5) != 0xD4AF27CF032D1691uLL )
      {
        Acl = -2147024891;
      }
      if ( Acl >= 0 )
      {
LABEL_581:
        Acl = 0;
        if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) & 7) == 0 )
          Acl = -2147024891;
      }
LABEL_537:
      if ( Acl < 0 )
        goto LABEL_2087;
      v992 = 0;
      v250 = RtlUIntAdd(4u, 4u, &v1159);
      v251 = v886;
      Acl = v250;
      if ( v250 >= 0 )
        v251 = v1159;
      v886 = v251;
      if ( v250 < 0 )
      {
        v253 = v886;
      }
      else
      {
        v252 = RtlUIntAdd(0, v251, &v992);
        v253 = v886;
        Acl = v252;
        if ( v252 >= 0 )
          v253 = v992;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v1019 = 8;
      Acl = RtlUIntAdd(8u, v253, &v1019);
      if ( Acl < 0 )
        goto LABEL_602;
      v260 = (v1019 + 7) & 0xFFFFFFF8;
      if ( v260 >= v1019 )
      {
        v994 = (v1019 + 7) & 0xFFFFFFF8;
        v262 = RtlUIntAdd(v260, 8u, &v994);
        v261 = v886;
        Acl = v262;
        if ( v262 >= 0 )
          v261 = v994;
      }
      else
      {
        v261 = v886;
        Acl = -1073741675;
      }
      if ( Acl < 0 )
      {
LABEL_602:
        v265 = v886;
      }
      else
      {
        v877 = 4;
        Acl = RtlUIntAdd(4u, v261, &v877);
        if ( Acl < 0
          || (Acl = RtlUIntAdd(v877, v263, &v877), Acl < 0)
          || (Acl = RtlUIntAdd(v877, v126[4], &v877), Acl < 0)
          || (Acl = RtlUIntAdd(v877, 4u, &v877), Acl < 0) )
        {
          v265 = v886;
        }
        else
        {
          v264 = RtlUIntAdd(v877, v126[8], &v877);
          v265 = v886;
          Acl = v264;
          v266 = v996;
          if ( Acl >= 0 )
            v266 = v877;
          v996 = v266;
          if ( Acl >= 0 )
            v265 = v266;
        }
      }
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v885 < v265 )
      {
        v1018 = 0;
        if ( &v1018 )
        {
          if ( *(_QWORD *)&uAugend[1] )
          {
            v269 = *(UINT **)&uAugend[1];
            v1116 = *(_QWORD *)&uAugend[1];
            if ( v864 )
            {
              while ( 1 )
              {
                v270 = RtlUIntAdd(4u, *v269, &v1057);
                Acl = v270;
                if ( v270 >= 0 )
                  v271 = v1057;
                v927 = v271;
                if ( v270 < 0 )
                  break;
                Acl = RtlULongLongAdd(v272, v271, &v1116);
                if ( Acl < 0 )
                  break;
                v269 = (UINT *)v1116;
                if ( v273 + 1 >= v864 )
                  goto LABEL_618;
              }
            }
            else
            {
LABEL_618:
              Acl = RtlULongLongAdd((ULONGLONG)v269, 4uLL, v1280);
              if ( Acl >= 0 )
              {
                if ( (unsigned __int64)(v275 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                {
                  Acl = -1073741789;
                  goto LABEL_634;
                }
                v276 = (_DWORD *)v1280[0];
                *v275 = v274;
                *v276 = v1018;
                ++v864;
              }
            }
          }
          else
          {
            v267 = RtlUIntAdd(4u, 4u, &v1145);
            v268 = v927;
            Acl = v267;
            if ( v267 >= 0 )
              v268 = v1145;
            v927 = v268;
            if ( v267 >= 0 )
            {
              Acl = RtlUIntAdd(uAugend[0], v268, uAugend);
              if ( Acl >= 0 )
              {
                ++v864;
LABEL_624:
                if ( uAugend[0] )
                {
                  v277 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
                  if ( v277 )
                  {
                    *(_QWORD *)&uAugend[1] = v277;
                    v864 = 0;
                    v998 = 0;
                    if ( &v998 )
                    {
                      Acl = RtlULongLongAdd((ULONGLONG)v277, 4uLL, v1260);
                      if ( Acl >= 0 )
                      {
                        if ( v279 + 2 <= (_DWORD *)((char *)v279 + uAugend[0]) )
                        {
                          v280 = (_DWORD *)v1260[0];
                          *v279 = v278;
                          *v280 = v998;
                          ++v864;
                        }
                        else
                        {
                          Acl = -1073741789;
                        }
                      }
                    }
                    else
                    {
                      Acl = -1073741811;
                    }
                  }
                  else
                  {
                    Acl = -1073741801;
                  }
                }
                else
                {
                  Acl = -1073741762;
                }
LABEL_634:
                if ( Acl >= 0 )
                  goto LABEL_757;
                goto LABEL_752;
              }
            }
          }
        }
        else
        {
          Acl = -1073741811;
        }
        if ( Acl < 0 )
          goto LABEL_142;
        goto LABEL_624;
      }
      v281 = v867[0];
      if ( v867[1] )
      {
        if ( LODWORD(v867[0]) > 3 )
        {
          v282 = v867[1];
          v916 = v867[1];
          do
          {
            Acl = RtlULongLongAdd(v282, 4uLL, &v916);
            if ( Acl < 0 )
              goto LABEL_648;
            Acl = RtlULongLongAdd(v916, v283, &v916);
            if ( Acl < 0 )
              goto LABEL_648;
            v282 = v916;
          }
          while ( (unsigned int)(v284 + 1) < 3 );
          Acl = RtlULongLongAdd(v916, 4uLL, &v916);
          if ( Acl < 0 )
          {
LABEL_648:
            v285 = v1058;
            v286 = v1211;
            goto LABEL_649;
          }
          v286 = (_QWORD *)v916;
          v1058 = v285;
          if ( !v285 )
            v286 = 0LL;
          v1211 = v286;
LABEL_649:
          if ( Acl < 0 )
            goto LABEL_142;
          if ( v285 != 8 )
          {
            Acl = -1073741789;
            goto LABEL_752;
          }
          v1229 = *v286;
        }
        else
        {
          Acl = -1073741811;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v1229 && qword_14077E228 )
      {
        if ( v1229 != qword_14077E228 )
        {
          v1034 = -1073425151;
          if ( &v1034 )
          {
            if ( *(_QWORD *)&uAugend[1] )
            {
              v289 = *(UINT **)&uAugend[1];
              v1118 = *(_QWORD *)&uAugend[1];
              if ( v864 )
              {
                while ( 1 )
                {
                  v290 = RtlUIntAdd(4u, *v289, &v1062);
                  Acl = v290;
                  if ( v290 >= 0 )
                    v291 = v1062;
                  v966 = v291;
                  if ( v290 < 0 )
                    break;
                  Acl = RtlULongLongAdd(v292, v291, &v1118);
                  if ( Acl < 0 )
                    break;
                  v289 = (UINT *)v1118;
                  if ( v293 + 1 >= v864 )
                    goto LABEL_670;
                }
              }
              else
              {
LABEL_670:
                Acl = RtlULongLongAdd((ULONGLONG)v289, 4uLL, v1274);
                if ( Acl >= 0 )
                {
                  if ( (unsigned __int64)(v295 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                  {
                    Acl = -1073741789;
                    goto LABEL_752;
                  }
                  v296 = (int *)v1274[0];
                  *v295 = v294;
                  *v296 = v1034;
                  ++v864;
                }
              }
            }
            else
            {
              v287 = RtlUIntAdd(4u, 4u, &v1060);
              v288 = v966;
              Acl = v287;
              if ( v287 >= 0 )
                v288 = v1060;
              v966 = v288;
              if ( v287 >= 0 )
              {
                Acl = RtlUIntAdd(uAugend[0], v288, uAugend);
                if ( Acl >= 0 )
                {
                  ++v864;
                  goto LABEL_676;
                }
              }
            }
          }
          else
          {
            Acl = -1073741811;
          }
          if ( Acl < 0 )
            goto LABEL_142;
LABEL_676:
          if ( !uAugend[0] )
          {
            Acl = -1073741762;
            goto LABEL_752;
          }
          v297 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
          if ( !v297 )
          {
            Acl = -1073741801;
            goto LABEL_752;
          }
          *(_QWORD *)&uAugend[1] = v297;
          v864 = 0;
          v1000 = -1073425151;
          if ( &v1000 )
          {
            Acl = RtlULongLongAdd((ULONGLONG)v297, 4uLL, v1262);
            if ( Acl >= 0 )
            {
              if ( v299 + 2 <= (_DWORD *)((char *)v299 + uAugend[0]) )
              {
                v300 = (int *)v1262[0];
                *v299 = v298;
                *v300 = v1000;
                ++v864;
              }
              else
              {
                Acl = -1073741789;
              }
            }
            goto LABEL_752;
          }
          goto LABEL_751;
        }
        if ( !v867[1] || v281 <= 4 )
          goto LABEL_751;
        v301 = v867[1];
        v918 = v867[1];
        do
        {
          Acl = RtlULongLongAdd(v301, 4uLL, &v918);
          if ( Acl < 0 )
            goto LABEL_695;
          Acl = RtlULongLongAdd(v918, v303, &v918);
          if ( Acl < 0 )
            goto LABEL_695;
          v301 = v918;
        }
        while ( (unsigned int)(v304 + 1) < 4 );
        Acl = RtlULongLongAdd(v918, 4uLL, &v918);
        if ( Acl < 0 )
        {
LABEL_695:
          v305 = v1064;
          v306 = v1213;
          goto LABEL_696;
        }
        v306 = (unsigned int *)v918;
        v1064 = v305;
        if ( !(_DWORD)v305 )
          v306 = 0LL;
        v1213 = v306;
LABEL_696:
        if ( Acl < 0 )
          goto LABEL_142;
        updated = ExUpdateLicenseData_0(v305, v306, v302, v305);
        if ( updated == 263 )
        {
          v308 = 1074058754;
        }
        else if ( updated == 0x40000000 )
        {
          v308 = 1074058753;
        }
        else if ( updated >= 0 )
        {
          v308 = 0;
        }
        else
        {
          v308 = updated | 0x10000000;
        }
        uAugend[0] = 0;
        v864 = 0;
        if ( *(_QWORD *)&uAugend[1] )
        {
          ExFreePoolWithTag(*(PVOID *)&uAugend[1], 0x20534C53u);
          *(_QWORD *)&uAugend[1] = 0LL;
        }
        v1020 = v308;
        if ( &v1020 )
        {
          v309 = RtlUIntAdd(4u, 4u, &v1066);
          v310 = v929;
          Acl = v309;
          if ( v309 >= 0 )
            v310 = v1066;
          v929 = v310;
          if ( v309 >= 0 )
          {
            Acl = RtlUIntAdd(uAugend[0], v310, uAugend);
            if ( Acl >= 0 )
            {
              ++v864;
              goto LABEL_714;
            }
          }
        }
        else
        {
          Acl = -1073741811;
        }
        if ( Acl < 0 )
          goto LABEL_142;
LABEL_714:
        if ( !uAugend[0] )
        {
          Acl = -1073741762;
          goto LABEL_752;
        }
        v311 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
        if ( !v311 )
        {
          Acl = -1073741801;
          goto LABEL_752;
        }
        *(_QWORD *)&uAugend[1] = v311;
        v864 = 0;
        v1002 = v308;
        if ( &v1002 )
        {
          Acl = RtlULongLongAdd((ULONGLONG)v311, 4uLL, v1264);
          if ( Acl >= 0 )
          {
            if ( v313 + 2 <= (_DWORD *)((char *)v313 + uAugend[0]) )
            {
              v314 = (int *)v1264[0];
              *v313 = v312;
              *v314 = v1002;
              ++v864;
            }
            else
            {
              Acl = -1073741789;
            }
          }
          goto LABEL_752;
        }
        goto LABEL_751;
      }
      v1028 = -1073425151;
      if ( &v1028 )
      {
        if ( *(_QWORD *)&uAugend[1] )
        {
          v317 = *(UINT **)&uAugend[1];
          v1121 = *(_QWORD *)&uAugend[1];
          if ( v864 )
          {
            while ( 1 )
            {
              v318 = RtlUIntAdd(4u, *v317, &v1071);
              Acl = v318;
              if ( v318 >= 0 )
                v319 = v1071;
              v933 = v319;
              if ( v318 < 0 )
                break;
              Acl = RtlULongLongAdd(v320, v319, &v1121);
              if ( Acl < 0 )
                break;
              v317 = (UINT *)v1121;
              if ( v321 + 1 >= v864 )
                goto LABEL_736;
            }
          }
          else
          {
LABEL_736:
            Acl = RtlULongLongAdd((ULONGLONG)v317, 4uLL, v1276);
            if ( Acl >= 0 )
            {
              if ( (unsigned __int64)(v323 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
              {
                Acl = -1073741789;
                goto LABEL_752;
              }
              v324 = (int *)v1276[0];
              *v323 = v322;
              *v324 = v1028;
              ++v864;
            }
          }
        }
        else
        {
          v315 = RtlUIntAdd(4u, 4u, &v1069);
          v316 = v933;
          Acl = v315;
          if ( v315 >= 0 )
            v316 = v1069;
          v933 = v316;
          if ( v315 >= 0 )
          {
            Acl = RtlUIntAdd(uAugend[0], v316, uAugend);
            if ( Acl >= 0 )
            {
              ++v864;
              goto LABEL_742;
            }
          }
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
LABEL_742:
      if ( !uAugend[0] )
      {
        Acl = -1073741762;
        goto LABEL_752;
      }
      v325 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
      if ( !v325 )
      {
        Acl = -1073741801;
        goto LABEL_752;
      }
      *(_QWORD *)&uAugend[1] = v325;
      v864 = 0;
      v1004 = -1073425151;
      if ( &v1004 )
      {
        Acl = RtlULongLongAdd((ULONGLONG)v325, 4uLL, v1266);
        if ( Acl >= 0 )
        {
          if ( v327 + 2 <= (_DWORD *)((char *)v327 + uAugend[0]) )
          {
            v328 = (int *)v1266[0];
            *v327 = v326;
            *v328 = v1004;
            ++v864;
          }
          else
          {
            Acl = -1073741789;
          }
        }
        goto LABEL_752;
      }
      goto LABEL_751;
    case 2:
      v907 = 0;
      v645 = RtlUIntAdd(4u, 4u, &v1171);
      v646 = v1029;
      Acl = v645;
      if ( v645 >= 0 )
        v646 = v1171;
      v1029 = v646;
      if ( v645 < 0 )
        goto LABEL_1609;
      Acl = RtlUIntAdd(0, v646, &v907);
      if ( Acl < 0 )
        goto LABEL_1609;
      v648 = RtlUIntAdd(v647 + 4, v647 + 8, &v887);
      Acl = v648;
      if ( v648 >= 0 )
        v649 = v887;
      v1029 = v649;
      if ( v648 < 0 )
      {
LABEL_1609:
        v651 = v887;
      }
      else
      {
        v650 = RtlUIntAdd(v907, v649, &v907);
        v651 = v887;
        Acl = v650;
        if ( v650 >= 0 )
          v651 = v907;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v1031 = 8;
      Acl = RtlUIntAdd(8u, v651, &v1031);
      if ( Acl < 0 )
        goto LABEL_1627;
      v653 = (v1031 + 7) & 0xFFFFFFF8;
      if ( v653 >= v1031 )
      {
        v1033 = (v1031 + 7) & 0xFFFFFFF8;
        v655 = RtlUIntAdd(v653, 8u, &v1033);
        v654 = v887;
        Acl = v655;
        if ( v655 >= 0 )
          v654 = v1033;
      }
      else
      {
        v654 = v887;
        Acl = -1073741675;
      }
      if ( Acl < 0 )
      {
LABEL_1627:
        v658 = v887;
      }
      else
      {
        v880 = 4;
        Acl = RtlUIntAdd(4u, v654, &v880);
        if ( Acl < 0
          || (Acl = RtlUIntAdd(v880, v656, &v880), Acl < 0)
          || (Acl = RtlUIntAdd(v880, v126[4], &v880), Acl < 0)
          || (Acl = RtlUIntAdd(v880, 4u, &v880), Acl < 0) )
        {
          v658 = v887;
        }
        else
        {
          v657 = RtlUIntAdd(v880, v126[8], &v880);
          v658 = v887;
          Acl = v657;
          v659 = v1035;
          if ( Acl >= 0 )
            v659 = v880;
          v1035 = v659;
          if ( Acl >= 0 )
            v658 = v659;
        }
      }
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v885 < v658 )
      {
        v1184 = 0LL;
      }
      else
      {
        v1184 = __rdtsc();
        qword_14077E228 = v1184;
      }
      uAugend[0] = v652;
      if ( !v652 )
      {
        Acl = -1073741762;
        goto LABEL_1661;
      }
      v660 = ExAllocatePoolWithTag(PagedPool, v652, 0x20534C53u);
      if ( !v660 )
      {
        Acl = -1073741801;
        goto LABEL_1661;
      }
      v661 = 0;
      *(_QWORD *)&uAugend[1] = v660;
      v864 = 0;
      v1016 = 0;
      if ( &v1016 )
      {
        Acl = RtlULongLongAdd((ULONGLONG)v660, 4uLL, v1277);
        if ( Acl >= 0 )
        {
          if ( v663 + 2 > (_DWORD *)((char *)v663 + uAugend[0]) )
          {
            Acl = -1073741789;
            goto LABEL_1661;
          }
          v664 = (_DWORD *)v1277[0];
          *v663 = v662;
          *v664 = v1016;
          v661 = ++v864;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v1186 = v1184;
      if ( !&v1186 )
      {
        Acl = -1073741811;
        goto LABEL_1661;
      }
      if ( !*(_QWORD *)&uAugend[1] )
      {
        v665 = RtlUIntAdd(4u, 8u, &v1124);
        v666 = v958;
        Acl = v665;
        if ( v665 >= 0 )
          v666 = v1124;
        v958 = v666;
        if ( v665 >= 0 )
        {
          Acl = RtlUIntAdd(uAugend[0], v666, uAugend);
          if ( Acl >= 0 )
          {
            ++v864;
            Acl = 0;
          }
        }
        goto LABEL_1661;
      }
      v667 = *(UINT **)&uAugend[1];
      v1023 = *(_QWORD *)&uAugend[1];
      if ( !v661 )
        goto LABEL_1656;
      while ( 1 )
      {
        v668 = RtlUIntAdd(4u, *v667, &v1078);
        Acl = v668;
        if ( v668 >= 0 )
          v669 = v1078;
        v958 = v669;
        if ( v668 < 0 )
          break;
        Acl = RtlULongLongAdd(v670, v669, &v1023);
        if ( Acl < 0 )
          break;
        v667 = (UINT *)v1023;
        if ( v671 + 1 >= v661 )
        {
LABEL_1656:
          Acl = RtlULongLongAdd((ULONGLONG)v667, 4uLL, v1279);
          if ( Acl >= 0 )
          {
            if ( (unsigned __int64)(v672 + 3) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
            {
              v673 = (unsigned __int64 *)v1279[0];
              *v672 = 8;
              *v673 = v1186;
              ++v864;
            }
            else
            {
              Acl = -1073741789;
            }
          }
          break;
        }
      }
LABEL_1661:
      if ( Acl >= 0 )
        goto LABEL_757;
      v5 = v866;
      goto LABEL_2088;
    case 4:
      v329 = sub_1406FDFB8(v867, v126, v125, &v864);
      goto LABEL_755;
    case 5:
      if ( !v126 )
        goto LABEL_2086;
      if ( !v867[1] )
      {
        Acl = -1073741811;
        goto LABEL_778;
      }
      if ( LODWORD(v867[0]) <= 3 )
      {
        Acl = -1073741811;
        goto LABEL_778;
      }
      v331 = v867[1];
      v920 = v867[1];
      do
      {
        Acl = RtlULongLongAdd(v331, 4uLL, &v920);
        if ( Acl < 0 )
          goto LABEL_773;
        Acl = RtlULongLongAdd(v920, v332, &v920);
        if ( Acl < 0 )
          goto LABEL_773;
        v331 = v920;
      }
      while ( (unsigned int)(v333 + 1) < 3 );
      Acl = RtlULongLongAdd(v920, 4uLL, &v920);
      if ( Acl < 0 )
      {
LABEL_773:
        v334 = v1073;
        v335 = v1245;
        goto LABEL_774;
      }
      v335 = (_QWORD *)v920;
      v1073 = v334;
      if ( !v334 )
        v335 = 0LL;
      v1245 = v335;
LABEL_774:
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v334 != 8 )
      {
        Acl = -1073741789;
        goto LABEL_752;
      }
      v1215 = *v335;
LABEL_778:
      if ( Acl < 0 )
        goto LABEL_142;
      v336 = 1;
      RtlInitUnicodeString(&v1282, L"Security-SPP-GenuineLocalStatus");
      v337 = sub_14051D560((unsigned int)&v1282, (unsigned int)&v1075, (unsigned int)&v1077, 4, (__int64)v1246);
      Acl = v337;
      if ( v337 == -1073741772 )
      {
        v1079 = 0;
      }
      else
      {
        if ( v337 >= 0 && (v1075 != 4 || !v1077) )
          v336 = 0;
        v1079 = v336;
        if ( v337 < 0 )
          goto LABEL_752;
        if ( v336 )
          KeResetEvent(&stru_140324640);
      }
      dword_14077E1C8 = 1;
      do
      {
        v338 = KeWaitForSingleObject(&stru_140324640, UserRequest, 1, 1u, 0LL);
        v339 = v338;
      }
      while ( v338 == 257 );
      if ( v338 >= 0 && v338 != 192 )
      {
        do
        {
          v340 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 1u, 0LL);
          v339 = v340;
        }
        while ( v340 == 257 );
        if ( v340 >= 0 && v340 != 192 && v340 != 258 )
          KeReleaseMutex(&Mutex, 0);
      }
      v875 = 0;
      v341 = RtlUIntAdd(4u, 4u, &v1081);
      v342 = v953;
      Acl = v341;
      if ( v341 >= 0 )
        v342 = v1081;
      v953 = v342;
      if ( v341 < 0 )
        goto LABEL_811;
      Acl = RtlUIntAdd(0, v342, &v875);
      if ( Acl < 0 )
        goto LABEL_811;
      v344 = RtlUIntAdd(v343 + 4, v343 + 8, &v1083);
      Acl = v344;
      if ( v344 >= 0 )
        v345 = v1083;
      v953 = v345;
      if ( v344 < 0 )
        goto LABEL_811;
      Acl = RtlUIntAdd(v875, v345, &v875);
      if ( Acl < 0 )
        goto LABEL_811;
      v346 = RtlUIntAdd(4u, 4u, &v897);
      Acl = v346;
      if ( v346 >= 0 )
        v347 = v897;
      v953 = v347;
      if ( v346 < 0 )
      {
LABEL_811:
        v349 = v897;
      }
      else
      {
        v348 = RtlUIntAdd(v875, v347, &v875);
        v349 = v897;
        Acl = v348;
        if ( v348 >= 0 )
          v349 = v875;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v1022 = 8;
      Acl = RtlUIntAdd(8u, v349, &v1022);
      if ( Acl >= 0 )
      {
        v351 = (v1022 + 7) & 0xFFFFFFF8;
        if ( v351 >= v1022 )
        {
          v1006 = (v1022 + 7) & 0xFFFFFFF8;
          v353 = RtlUIntAdd(v351, 8u, &v1006);
          v352 = v897;
          Acl = v353;
          if ( v353 >= 0 )
            v352 = v1006;
        }
        else
        {
          v352 = v897;
          Acl = -1073741675;
        }
        if ( Acl < 0 )
          goto LABEL_142;
        v882 = 4;
        Acl = RtlUIntAdd(4u, v352, &v882);
        if ( Acl >= 0 )
        {
          Acl = RtlUIntAdd(v882, v354, &v882);
          if ( Acl >= 0 )
          {
            Acl = RtlUIntAdd(v882, v126[4], &v882);
            if ( Acl >= 0 )
            {
              Acl = RtlUIntAdd(v882, 4u, &v882);
              if ( Acl >= 0 )
              {
                Acl = RtlUIntAdd(v882, v126[8], &v882);
                v355 = v1087;
                if ( Acl >= 0 )
                  v355 = v882;
                v1087 = v355;
              }
            }
          }
        }
      }
      if ( Acl < 0 )
        goto LABEL_142;
      uAugend[0] = v350;
      if ( !v350 )
      {
        Acl = -1073741762;
        goto LABEL_752;
      }
      v356 = ExAllocatePoolWithTag(PagedPool, v350, 0x20534C53u);
      if ( !v356 )
      {
        Acl = -1073741801;
        goto LABEL_752;
      }
      *(_QWORD *)&uAugend[1] = v356;
      v357 = 0;
      v864 = 0;
      v974[0] = v339 | 0x10000000;
      if ( v974 )
      {
        Acl = RtlULongLongAdd((ULONGLONG)v356, 4uLL, v1268);
        if ( Acl >= 0 )
        {
          if ( v359 + 2 > (_DWORD *)((char *)v359 + uAugend[0]) )
          {
            Acl = -1073741789;
            goto LABEL_752;
          }
          v360 = (_DWORD *)v1268[0];
          *v359 = v358;
          *v360 = v974[0];
          v357 = ++v864;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v1195 = v1215;
      if ( &v1195 )
      {
        if ( *(_QWORD *)&uAugend[1] )
        {
          v364 = *(UINT **)&uAugend[1];
          v365 = 0;
          v1123 = *(_QWORD *)&uAugend[1];
          if ( v357 )
          {
            while ( 1 )
            {
              v366 = RtlUIntAdd(4u, *v364, &v1091);
              Acl = v366;
              if ( v366 >= 0 )
                v367 = v1091;
              v937 = v367;
              if ( v366 < 0 )
                break;
              Acl = RtlULongLongAdd(v368, v367, &v1123);
              if ( Acl < 0 )
                break;
              v364 = (UINT *)v1123;
              if ( ++v365 >= v357 )
                goto LABEL_851;
            }
          }
          else
          {
LABEL_851:
            Acl = RtlULongLongAdd((ULONGLONG)v364, 4uLL, v1278);
            if ( Acl >= 0 )
            {
              if ( (unsigned __int64)(v369 + 3) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
              {
                Acl = -1073741789;
                goto LABEL_752;
              }
              v370 = (_QWORD *)v1278[0];
              *v369 = 8;
              *v370 = v1195;
              v357 = ++v864;
            }
          }
        }
        else
        {
          v361 = RtlUIntAdd(4u, 8u, &v1089);
          v362 = v937;
          Acl = v361;
          if ( v361 >= 0 )
            v362 = v1089;
          v937 = v362;
          if ( v361 >= 0 )
          {
            v363 = RtlUIntAdd(uAugend[0], v362, uAugend);
            v357 = v864;
            Acl = v363;
            if ( v363 >= 0 )
            {
              v357 = ++v864;
              goto LABEL_857;
            }
          }
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
LABEL_857:
      v975 = dword_14077E06C;
      if ( !&v975 )
        goto LABEL_751;
      if ( *(_QWORD *)&uAugend[1] )
      {
        v373 = *(UINT **)&uAugend[1];
        v374 = 0;
        v1125 = *(_QWORD *)&uAugend[1];
        if ( v357 )
        {
          while ( 1 )
          {
            v375 = RtlUIntAdd(4u, *v373, &v1095);
            Acl = v375;
            if ( v375 >= 0 )
              v376 = v1095;
            v955 = v376;
            if ( v375 < 0 )
              break;
            Acl = RtlULongLongAdd(v377, v376, &v1125);
            if ( Acl < 0 )
              break;
            v373 = (UINT *)v1125;
            if ( ++v374 >= v378 )
              goto LABEL_870;
          }
        }
        else
        {
LABEL_870:
          Acl = RtlULongLongAdd((ULONGLONG)v373, 4uLL, v1251);
          if ( Acl >= 0 )
          {
            if ( (unsigned __int64)(v380 + 2) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
            {
              v381 = (int *)v1251[0];
              *v380 = v379;
              *v381 = v975;
              ++v864;
            }
            else
            {
              Acl = -1073741789;
            }
          }
        }
      }
      else
      {
        v371 = RtlUIntAdd(4u, 4u, &v1093);
        v372 = v955;
        Acl = v371;
        if ( v371 >= 0 )
          v372 = v1093;
        v955 = v372;
        if ( v371 >= 0 )
        {
          Acl = RtlUIntAdd(uAugend[0], v372, uAugend);
          if ( Acl >= 0 )
          {
            ++v864;
            Acl = 0;
          }
        }
      }
      goto LABEL_752;
    case 6:
      if ( !v126 )
        goto LABEL_2086;
      if ( !v867[1] )
      {
        Acl = -1073741811;
        goto LABEL_892;
      }
      if ( LODWORD(v867[0]) <= 3 )
      {
        Acl = -1073741811;
        goto LABEL_892;
      }
      v382 = v867[1];
      v922 = v867[1];
      do
      {
        Acl = RtlULongLongAdd(v382, 4uLL, &v922);
        if ( Acl < 0 )
          goto LABEL_887;
        Acl = RtlULongLongAdd(v922, v383, &v922);
        if ( Acl < 0 )
          goto LABEL_887;
        v382 = v922;
      }
      while ( (unsigned int)(v384 + 1) < 3 );
      Acl = RtlULongLongAdd(v922, 4uLL, &v922);
      if ( Acl < 0 )
      {
LABEL_887:
        v385 = v1097;
        v386 = v1231;
        goto LABEL_888;
      }
      v386 = (_QWORD *)v922;
      v1097 = v385;
      if ( !v385 )
        v386 = 0LL;
      v1231 = v386;
LABEL_888:
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v385 != 8 )
      {
        Acl = -1073741789;
        goto LABEL_752;
      }
      v1217 = *v386;
LABEL_892:
      if ( Acl < 0 )
        goto LABEL_142;
      Interval.QuadPart = -35000000LL;
      do
      {
        v387 = KeDelayExecutionThread(1, 1u, &Interval);
        v388 = v387;
      }
      while ( v387 == 257 );
      if ( v387 >= 0 && v387 != 192 )
      {
        Interval.QuadPart = -270000000LL;
        do
        {
          v389 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 1u, &Interval);
          v388 = v389;
        }
        while ( v389 == 257 );
        if ( v389 >= 0 && v389 != 192 && v389 != 258 )
          KeReleaseMutex(&Mutex, 0);
      }
      v390 = RtlUIntAdd(4u, 4u, &v1099);
      v392 = v977;
      Acl = v390;
      if ( v390 >= 0 )
        v392 = v1099;
      v977 = v392;
      if ( v390 < 0 )
        goto LABEL_912;
      v911 = v392;
      v393 = RtlUIntAdd(v391, 8u, &v895);
      v395 = v394;
      Acl = v393;
      if ( v393 >= 0 )
        v395 = v895;
      v977 = v395;
      if ( v393 < 0 )
      {
LABEL_912:
        v397 = v895;
      }
      else
      {
        v396 = RtlUIntAdd(v394, v395, &v911);
        v397 = v895;
        Acl = v396;
        if ( v396 >= 0 )
          v397 = v911;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v973 = 8;
      Acl = RtlUIntAdd(8u, v397, &v973);
      if ( Acl < 0 )
        goto LABEL_927;
      v399 = (v973 + 7) & 0xFFFFFFF8;
      if ( v399 >= v973 )
      {
        v983 = (v973 + 7) & 0xFFFFFFF8;
        v401 = RtlUIntAdd(v399, 8u, &v983);
        v400 = v895;
        Acl = v401;
        if ( v401 >= 0 )
          v400 = v983;
      }
      else
      {
        v400 = v895;
        Acl = -1073741675;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v881 = 4;
      Acl = RtlUIntAdd(4u, v400, &v881);
      if ( Acl >= 0 )
      {
        Acl = RtlUIntAdd(v881, v402, &v881);
        if ( Acl >= 0 )
        {
          Acl = RtlUIntAdd(v881, v126[4], &v881);
          if ( Acl >= 0 )
          {
            Acl = RtlUIntAdd(v881, 4u, &v881);
            if ( Acl >= 0 )
            {
              Acl = RtlUIntAdd(v881, v126[8], &v881);
              v403 = v1049;
              if ( Acl >= 0 )
                v403 = v881;
              v1049 = v403;
            }
          }
        }
      }
LABEL_927:
      if ( Acl < 0 )
        goto LABEL_142;
      uAugend[0] = v398;
      if ( !v398 )
      {
        Acl = -1073741762;
        goto LABEL_752;
      }
      v404 = ExAllocatePoolWithTag(PagedPool, v398, 0x20534C53u);
      if ( !v404 )
      {
        Acl = -1073741801;
        goto LABEL_752;
      }
      *(_QWORD *)&uAugend[1] = v404;
      v405 = 0;
      v864 = 0;
      v985 = v388 | 0x10000000;
      if ( &v985 )
      {
        Acl = RtlULongLongAdd((ULONGLONG)v404, 4uLL, v1253);
        if ( Acl >= 0 )
        {
          if ( v407 + 2 > (_DWORD *)((char *)v407 + uAugend[0]) )
          {
            Acl = -1073741789;
            goto LABEL_752;
          }
          v408 = (int *)v1253[0];
          *v407 = v406;
          *v408 = v985;
          v405 = ++v864;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v1181 = v1217;
      if ( !&v1181 )
        goto LABEL_751;
      if ( *(_QWORD *)&uAugend[1] )
      {
        v411 = *(UINT **)&uAugend[1];
        v1129 = *(_QWORD *)&uAugend[1];
        if ( v405 )
        {
          while ( 1 )
          {
            v412 = RtlUIntAdd(4u, *v411, &v1053);
            Acl = v412;
            if ( v412 >= 0 )
              v413 = v1053;
            v939 = v413;
            if ( v412 < 0 )
              break;
            Acl = RtlULongLongAdd(v414, v413, &v1129);
            if ( Acl < 0 )
              break;
            v411 = (UINT *)v1129;
            if ( v415 + 1 >= v405 )
              goto LABEL_952;
          }
        }
        else
        {
LABEL_952:
          Acl = RtlULongLongAdd((ULONGLONG)v411, 4uLL, v1250);
          if ( Acl >= 0 )
          {
            if ( (unsigned __int64)(v416 + 3) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
            {
              v417 = (_QWORD *)v1250[0];
              *v416 = 8;
              *v417 = v1181;
              ++v864;
            }
            else
            {
              Acl = -1073741789;
            }
          }
        }
      }
      else
      {
        v409 = RtlUIntAdd(4u, 8u, &v1051);
        v410 = v939;
        Acl = v409;
        if ( v409 >= 0 )
          v410 = v1051;
        v939 = v410;
        if ( v409 >= 0 )
        {
          Acl = RtlUIntAdd(uAugend[0], v410, uAugend);
          if ( Acl >= 0 )
          {
            ++v864;
            Acl = 0;
          }
        }
      }
      goto LABEL_752;
    case 7:
      if ( !v126 )
        goto LABEL_2086;
      if ( !v867[1] )
      {
        Acl = -1073741811;
        goto LABEL_974;
      }
      if ( LODWORD(v867[0]) <= 3 )
      {
        Acl = -1073741811;
        goto LABEL_974;
      }
      v418 = v867[1];
      v924 = v867[1];
      do
      {
        Acl = RtlULongLongAdd(v418, 4uLL, &v924);
        if ( Acl < 0 )
          goto LABEL_969;
        Acl = RtlULongLongAdd(v924, v419, &v924);
        if ( Acl < 0 )
          goto LABEL_969;
        v418 = v924;
      }
      while ( (unsigned int)(v420 + 1) < 3 );
      Acl = RtlULongLongAdd(v924, 4uLL, &v924);
      if ( Acl < 0 )
      {
LABEL_969:
        v421 = v1164;
        v422 = v1239;
        goto LABEL_970;
      }
      v422 = (_QWORD *)v924;
      v1164 = v421;
      if ( !v421 )
        v422 = 0LL;
      v1239 = v422;
LABEL_970:
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v421 != 8 )
      {
        Acl = -1073741789;
        goto LABEL_752;
      }
      v1233 = *v422;
LABEL_974:
      if ( Acl < 0 )
        goto LABEL_142;
      v1219.QuadPart = -270000000LL;
      v423 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 0, &v1219);
      if ( v423 >= 0 && v423 != 192 && v423 != 258 )
      {
        if ( stru_140324640.Header.SignalState || !dword_14077E14C )
        {
          v424 = MEMORY[0xFFFFF78000000320];
          TimeIncrement = KeQueryTimeIncrement();
          dword_14077E14C = 1;
          qword_14077E1F8 = v424 * TimeIncrement / 10000;
          KeResetEvent(&stru_140324640);
        }
        KeReleaseMutex(&Mutex, 0);
      }
      v426 = RtlUIntAdd(4u, 4u, &v1170);
      v428 = v987;
      Acl = v426;
      if ( v426 >= 0 )
        v428 = v1170;
      v987 = v428;
      if ( v426 < 0 )
        goto LABEL_991;
      v909 = v428;
      v429 = RtlUIntAdd(v427, 8u, &v900);
      v431 = v430;
      Acl = v429;
      if ( v429 >= 0 )
        v431 = v900;
      v987 = v431;
      if ( v429 < 0 )
      {
LABEL_991:
        v433 = v900;
      }
      else
      {
        v432 = RtlUIntAdd(v430, v431, &v909);
        v433 = v900;
        Acl = v432;
        if ( v432 >= 0 )
          v433 = v909;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v991 = 8;
      Acl = RtlUIntAdd(8u, v433, &v991);
      if ( Acl < 0 )
        goto LABEL_1006;
      v435 = (v991 + 7) & 0xFFFFFFF8;
      if ( v435 >= v991 )
      {
        v993 = (v991 + 7) & 0xFFFFFFF8;
        v437 = RtlUIntAdd(v435, 8u, &v993);
        v436 = v900;
        Acl = v437;
        if ( v437 >= 0 )
          v436 = v993;
      }
      else
      {
        v436 = v900;
        Acl = -1073741675;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v878 = 4;
      Acl = RtlUIntAdd(4u, v436, &v878);
      if ( Acl >= 0 )
      {
        Acl = RtlUIntAdd(v878, v438, &v878);
        if ( Acl >= 0 )
        {
          Acl = RtlUIntAdd(v878, v126[4], &v878);
          if ( Acl >= 0 )
          {
            Acl = RtlUIntAdd(v878, 4u, &v878);
            if ( Acl >= 0 )
            {
              Acl = RtlUIntAdd(v878, v126[8], &v878);
              v439 = v1174;
              if ( Acl >= 0 )
                v439 = v878;
              v1174 = v439;
            }
          }
        }
      }
LABEL_1006:
      if ( Acl < 0 )
        goto LABEL_142;
      uAugend[0] = v434;
      if ( !v434 )
      {
        Acl = -1073741762;
        goto LABEL_752;
      }
      v440 = ExAllocatePoolWithTag(PagedPool, v434, 0x20534C53u);
      if ( !v440 )
      {
        Acl = -1073741801;
        goto LABEL_752;
      }
      v441 = 0;
      *(_QWORD *)&uAugend[1] = v440;
      v864 = 0;
      v995 = 0x10000000;
      if ( &v995 )
      {
        Acl = RtlULongLongAdd((ULONGLONG)v440, 4uLL, v1257);
        if ( Acl >= 0 )
        {
          if ( v443 + 2 > (_DWORD *)((char *)v443 + uAugend[0]) )
          {
            Acl = -1073741789;
            goto LABEL_752;
          }
          v444 = (int *)v1257[0];
          *v443 = v442;
          *v444 = v995;
          v441 = ++v864;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v1189 = v1233;
      if ( !&v1189 )
        goto LABEL_751;
      if ( *(_QWORD *)&uAugend[1] )
      {
        v447 = *(UINT **)&uAugend[1];
        v1131 = *(_QWORD *)&uAugend[1];
        if ( v441 )
        {
          while ( 1 )
          {
            v448 = RtlUIntAdd(4u, *v447, &v1146);
            Acl = v448;
            if ( v448 >= 0 )
              v449 = v1146;
            v956 = v449;
            if ( v448 < 0 )
              break;
            Acl = RtlULongLongAdd(v450, v449, &v1131);
            if ( Acl < 0 )
              break;
            v447 = (UINT *)v1131;
            if ( v451 + 1 >= v441 )
              goto LABEL_1031;
          }
        }
        else
        {
LABEL_1031:
          Acl = RtlULongLongAdd((ULONGLONG)v447, 4uLL, v1259);
          if ( Acl >= 0 )
          {
            if ( (unsigned __int64)(v452 + 3) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
            {
              v453 = (_QWORD *)v1259[0];
              *v452 = 8;
              *v453 = v1189;
              ++v864;
            }
            else
            {
              Acl = -1073741789;
            }
          }
        }
      }
      else
      {
        v445 = RtlUIntAdd(4u, 8u, &v1115);
        v446 = v956;
        Acl = v445;
        if ( v445 >= 0 )
          v446 = v1115;
        v956 = v446;
        if ( v445 >= 0 )
        {
          Acl = RtlUIntAdd(uAugend[0], v446, uAugend);
          if ( Acl >= 0 )
          {
            ++v864;
            Acl = 0;
          }
        }
      }
      goto LABEL_752;
    case 15:
      v329 = sub_1405870FC(v867, 0x140000000uLL, v125, &v864);
LABEL_755:
      Acl = v329;
      v140 = v329 < 0;
LABEL_756:
      if ( !v140 )
        goto LABEL_757;
      goto LABEL_2087;
    case 16:
      v454 = SeExports;
      v455 = RtlLengthSid(SeExports->SeNetworkServiceSid);
      v456 = RtlLengthSid(v454->SeLocalServiceSid) + v455;
      v457 = v456 + RtlLengthSid(v454->SeAliasAdminsSid) + 32;
      v458 = (ACL *)ExAllocatePoolWithTag(PagedPool, v457, 0x20534C53u);
      v461 = v458;
      if ( v458 )
      {
        Acl = RtlCreateAcl(v458, v457, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v461, 2u, 0x20u, SeExports->SeLocalServiceSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v461, 2u, 0x20u, SeExports->SeNetworkServiceSid);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v461, 2u, 0x20u, SeExports->SeAliasAdminsSid);
              if ( Acl >= 0 )
              {
                Acl = RtlCreateSecurityDescriptor(v1293, 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(v1293, 1u, v461, 0);
                  if ( Acl >= 0 )
                  {
                    SeCaptureSubjectContext(&SubjectSecurityContext);
                    v462 = SeAccessCheck(
                             v1293,
                             &SubjectSecurityContext,
                             0,
                             0x20u,
                             0,
                             0LL,
                             (PGENERIC_MAPPING)&IopFileMapping,
                             1,
                             &v1199,
                             &v1043);
                    SeReleaseSubjectContext(&SubjectSecurityContext);
                    if ( !v462 )
                      Acl = v1043;
                  }
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v461, 0x20534C53u);
        if ( Acl >= 0 )
        {
          v1148 = 0;
          v1134 = 0;
          v1133 = 8;
          Acl = 0;
          v463 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1133, 8u, &v1148) >= 0
              && (v1134 & 0x20) != 0;
          v464 = *((_DWORD *)v872 + 4);
          if ( v464 == 160
            && !memcmp(qword_140725170, *((const void **)v872 + 3), 0xA0uLL)
            && v126[4] == 160
            && !memcmp(qword_140724BD0, *((const void **)v126 + 3), 0xA0uLL)
            && *((_DWORD *)v872 + 8) == 8
            && **((_QWORD **)v872 + 5) == 0x35DCEB18766AABAALL
            && v126[8] == 8
            && **((_QWORD **)v126 + 5) == 0x14CEA8BAE086077CLL )
          {
            goto LABEL_1073;
          }
          if ( !v463
            || v464 != 160
            || memcmp(qword_140724DB0, *((const void **)v872 + 3), 0xA0uLL)
            || v126[4] != 160
            || memcmp(qword_140724B30, *((const void **)v126 + 3), 0xA0uLL)
            || *((_DWORD *)v872 + 8) != 8
            || **((_QWORD **)v872 + 5) != 0xF10D668DB2BB8BB9uLL
            || v126[8] != 8
            || **((_QWORD **)v126 + 5) != 0x768DFD321621EA95LL )
          {
            Acl = -2147024891;
          }
          if ( Acl >= 0 )
          {
LABEL_1073:
            Acl = 0;
            v997 = 0;
            UpdateFileEaAllowedExt_0 = QueryUpdateFileEaAllowedExt_0();
            if ( UpdateFileEaAllowedExt_0 == -1073741637
              || (Acl = UpdateFileEaAllowedExt_0, UpdateFileEaAllowedExt_0 >= 0) )
            {
              if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) & 7) == 0 )
                Acl = -2147024891;
            }
          }
        }
      }
      else
      {
        Acl = -1073741801;
      }
      if ( Acl < 0 )
        goto LABEL_2087;
      Acl = sub_140701838(v867, v459, v460, &v864);
      if ( Acl < 0 )
        goto LABEL_2087;
      goto LABEL_757;
    case 17:
      v466 = SeExports;
      v467 = RtlLengthSid(SeExports->SeNetworkServiceSid);
      v468 = RtlLengthSid(v466->SeLocalServiceSid) + v467;
      v469 = v468 + RtlLengthSid(v466->SeAliasAdminsSid) + 32;
      v470 = (ACL *)ExAllocatePoolWithTag(PagedPool, v469, 0x20534C53u);
      v473 = v470;
      if ( v470 )
      {
        Acl = RtlCreateAcl(v470, v469, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v473, 2u, 0x20u, SeExports->SeLocalServiceSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v473, 2u, 0x20u, SeExports->SeNetworkServiceSid);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v473, 2u, 0x20u, SeExports->SeAliasAdminsSid);
              if ( Acl >= 0 )
              {
                Acl = RtlCreateSecurityDescriptor(v1294, 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(v1294, 1u, v473, 0);
                  if ( Acl >= 0 )
                  {
                    SeCaptureSubjectContext(&v1289);
                    v474 = SeAccessCheck(
                             v1294,
                             &v1289,
                             0,
                             0x20u,
                             0,
                             0LL,
                             (PGENERIC_MAPPING)&IopFileMapping,
                             1,
                             &v1235,
                             &v951);
                    SeReleaseSubjectContext(&v1289);
                    if ( !v474 )
                      Acl = v951;
                  }
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v473, 0x20534C53u);
        if ( Acl >= 0 )
        {
          v1150 = 0;
          v1137 = 0;
          v1136 = 8;
          Acl = 0;
          v475 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1136, 8u, &v1150) >= 0
              && (v1137 & 0x20) != 0;
          v476 = *((_DWORD *)v872 + 4);
          if ( v476 == 160
            && !memcmp(qword_140725170, *((const void **)v872 + 3), 0xA0uLL)
            && v126[4] == 160
            && !memcmp(qword_140724BD0, *((const void **)v126 + 3), 0xA0uLL)
            && *((_DWORD *)v872 + 8) == 8
            && **((_QWORD **)v872 + 5) == 0x35DCEB18766AABAALL
            && v126[8] == 8
            && **((_QWORD **)v126 + 5) == 0x14CEA8BAE086077CLL )
          {
            goto LABEL_1115;
          }
          if ( !v475
            || v476 != 160
            || memcmp(qword_140724DB0, *((const void **)v872 + 3), 0xA0uLL)
            || v126[4] != 160
            || memcmp(qword_140724B30, *((const void **)v126 + 3), 0xA0uLL)
            || *((_DWORD *)v872 + 8) != 8
            || **((_QWORD **)v872 + 5) != 0xF10D668DB2BB8BB9uLL
            || v126[8] != 8
            || **((_QWORD **)v126 + 5) != 0x768DFD321621EA95LL )
          {
            Acl = -2147024891;
          }
          if ( Acl >= 0 )
          {
LABEL_1115:
            Acl = 0;
            v999 = 0;
            v477 = QueryUpdateFileEaAllowedExt_0();
            if ( v477 == -1073741637 || (Acl = v477, v477 >= 0) && v999 != 1 )
            {
              if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) & 7) == 0 )
                Acl = -2147024891;
            }
          }
        }
      }
      else
      {
        Acl = -1073741801;
      }
      if ( Acl < 0 )
        goto LABEL_2087;
      Acl = sub_140700A3C(v867, v471, v472, &v864);
      if ( Acl < 0 )
        goto LABEL_2087;
      goto LABEL_757;
    case 18:
      v1226 = __rdtsc();
      qword_14077E158 = v1226;
      v906 = 0;
      v625 = RtlUIntAdd(4u, 4u, &v1149);
      v626 = v1025;
      Acl = v625;
      if ( v625 >= 0 )
        v626 = v1149;
      v1025 = v626;
      if ( v625 < 0 )
        goto LABEL_1569;
      Acl = RtlUIntAdd(0, v626, &v906);
      if ( Acl < 0 )
        goto LABEL_1569;
      v628 = RtlUIntAdd(v627 + 4, v627 + 8, &v962);
      Acl = v628;
      if ( v628 >= 0 )
        v629 = v962;
      v1025 = v629;
      if ( v628 < 0 )
      {
LABEL_1569:
        v630 = v962;
      }
      else
      {
        Acl = RtlUIntAdd(v906, v629, &v906);
        v630 = v962;
        if ( Acl >= 0 )
          v630 = v906;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      uAugend[0] = v630;
      if ( !v630 )
      {
        Acl = -1073741762;
        goto LABEL_752;
      }
      v631 = ExAllocatePoolWithTag(PagedPool, v630, 0x20534C53u);
      if ( !v631 )
      {
        Acl = -1073741801;
        goto LABEL_752;
      }
      v632 = 0;
      *(_QWORD *)&uAugend[1] = v631;
      v864 = 0;
      v1027 = 0;
      if ( &v1027 )
      {
        Acl = RtlULongLongAdd((ULONGLONG)v631, 4uLL, v1273);
        if ( Acl >= 0 )
        {
          if ( v634 + 2 > (_DWORD *)((char *)v634 + uAugend[0]) )
          {
            Acl = -1073741789;
            goto LABEL_752;
          }
          v635 = (_DWORD *)v1273[0];
          *v634 = v633;
          *v635 = v1027;
          v632 = ++v864;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v1182 = v1226;
      if ( !&v1182 )
        goto LABEL_751;
      if ( !*(_QWORD *)&uAugend[1] )
      {
        v636 = RtlUIntAdd(4u, 8u, &v1122);
        v637 = v969;
        Acl = v636;
        if ( v636 >= 0 )
          v637 = v1122;
        v969 = v637;
        if ( v636 >= 0 )
        {
          Acl = RtlUIntAdd(uAugend[0], v637, uAugend);
          if ( Acl >= 0 )
          {
            ++v864;
            Acl = 0;
          }
        }
        goto LABEL_752;
      }
      v638 = *(UINT **)&uAugend[1];
      v1042 = *(_QWORD *)&uAugend[1];
      if ( !v632 )
        goto LABEL_1595;
      while ( 1 )
      {
        v639 = RtlUIntAdd(4u, *v638, &v1074);
        Acl = v639;
        if ( v639 >= 0 )
          v640 = v1074;
        v969 = v640;
        if ( v639 < 0 )
          goto LABEL_752;
        Acl = RtlULongLongAdd(v641, v640, &v1042);
        if ( Acl < 0 )
          goto LABEL_752;
        v638 = (UINT *)v1042;
        if ( v642 + 1 >= v632 )
        {
LABEL_1595:
          Acl = RtlULongLongAdd((ULONGLONG)v638, 4uLL, v1275);
          if ( Acl >= 0 )
          {
            if ( (unsigned __int64)(v643 + 3) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
            {
              v644 = (unsigned __int64 *)v1275[0];
              *v643 = 8;
              *v644 = v1182;
              ++v864;
            }
            else
            {
              Acl = -1073741789;
            }
          }
          goto LABEL_752;
        }
      }
    case 19:
      Acl = sub_1406FFC40(v867, 0x140000000uLL, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 20:
      v674 = SeExports;
      v675 = RtlLengthSid(SeExports->SeNetworkServiceSid);
      v676 = RtlLengthSid(v674->SeLocalServiceSid) + v675;
      v677 = v676 + RtlLengthSid(v674->SeAliasAdminsSid) + 32;
      v678 = (ACL *)ExAllocatePoolWithTag(PagedPool, v677, 0x20534C53u);
      v681 = v678;
      if ( !v678 )
      {
        Acl = -1073741801;
        goto LABEL_1667;
      }
      Acl = RtlCreateAcl(v678, v677, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v681, 2u, 0x20u, SeExports->SeLocalServiceSid);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v681, 2u, 0x20u, SeExports->SeNetworkServiceSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v681, 2u, 0x20u, SeExports->SeAliasAdminsSid);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(v1292, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(v1292, 1u, v681, 0);
                if ( Acl >= 0 )
                {
                  SeCaptureSubjectContext(&v1287);
                  v682 = SeAccessCheck(
                           v1292,
                           &v1287,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           &v1210,
                           &v1151);
                  SeReleaseSubjectContext(&v1287);
                  if ( !v682 )
                    Acl = v1151;
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v681, 0x20534C53u);
      if ( Acl < 0 )
        goto LABEL_1667;
      v1080 = 0;
      v1047 = 0;
      v1046 = 8;
      Acl = 0;
      v683 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1046, 8u, &v1080) >= 0 && (v1047 & 0x20) != 0;
      v684 = *((_DWORD *)v872 + 4);
      if ( v684 == 160
        && !memcmp(qword_140725170, *((const void **)v872 + 3), 0xA0uLL)
        && v126[4] == 160
        && !memcmp(qword_140724BD0, *((const void **)v126 + 3), 0xA0uLL)
        && *((_DWORD *)v872 + 8) == 8
        && **((_QWORD **)v872 + 5) == 0x35DCEB18766AABAALL
        && v126[8] == 8
        && **((_QWORD **)v126 + 5) == 0x14CEA8BAE086077CLL )
      {
        goto LABEL_1719;
      }
      if ( !v683 )
        goto LABEL_1700;
      if ( v684 != 160 )
        goto LABEL_1708;
      if ( !memcmp(qword_140724DB0, *((const void **)v872 + 3), 0xA0uLL)
        && v126[4] == 160
        && !memcmp(qword_140724B30, *((const void **)v126 + 3), 0xA0uLL)
        && *((_DWORD *)v872 + 8) == 8
        && **((_QWORD **)v872 + 5) == 0xF10D668DB2BB8BB9uLL
        && v126[8] == 8
        && **((_QWORD **)v126 + 5) == 0x768DFD321621EA95LL )
      {
        goto LABEL_1718;
      }
LABEL_1700:
      if ( v684 == 160
        && !memcmp(qword_140725030, *((const void **)v872 + 3), 0xA0uLL)
        && v126[4] == 160
        && !memcmp(qword_140724A90, *((const void **)v126 + 3), 0xA0uLL)
        && *((_DWORD *)v872 + 8) == 8
        && **((_QWORD **)v872 + 5) == 0xB56226AEBAE0318DuLL
        && v126[8] == 8
        && **((_QWORD **)v126 + 5) == 0x86341B0F473E1C86uLL )
      {
        goto LABEL_1719;
      }
LABEL_1708:
      if ( !v683
        || v684 != 160
        || memcmp(qword_140724D10, *((const void **)v872 + 3), 0xA0uLL)
        || v126[4] != 160
        || memcmp(qword_140724810, *((const void **)v126 + 3), 0xA0uLL)
        || *((_DWORD *)v872 + 8) != 8
        || **((_QWORD **)v872 + 5) != 0x4A5686C5B3409A7FLL
        || v126[8] != 8
        || **((_QWORD **)v126 + 5) != 0x9408085E1DC89E40uLL )
      {
        Acl = -2147024891;
      }
LABEL_1718:
      if ( Acl >= 0 )
      {
LABEL_1719:
        Acl = 0;
        v974[2] = 0;
        v685 = QueryUpdateFileEaAllowedExt_0();
        if ( v685 == -1073741637 || (Acl = v685, v685 >= 0) )
        {
          if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) & 7) == 0 )
            Acl = -2147024891;
        }
      }
LABEL_1667:
      if ( Acl >= 0 )
      {
        Acl = sub_140701618(v867, v679, v680, &v864);
        if ( Acl >= 0 )
          goto LABEL_757;
      }
LABEL_1957:
      v5 = v866;
      goto LABEL_2088;
    case 21:
      Acl = sub_1406FF044(v867, 0x140000000uLL, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 22:
      v540 = v867[0];
      if ( !v867[1] )
      {
        Acl = -1073741811;
        goto LABEL_1341;
      }
      if ( LODWORD(v867[0]) <= 3 )
      {
        Acl = -1073741811;
        goto LABEL_1341;
      }
      v541 = v867[1];
      v934 = v867[1];
      do
      {
        Acl = RtlULongLongAdd(v541, 4uLL, &v934);
        if ( Acl < 0 )
          goto LABEL_1336;
        Acl = RtlULongLongAdd(v934, v542, &v934);
        if ( Acl < 0 )
          goto LABEL_1336;
        v541 = v934;
      }
      while ( (unsigned int)(v543 + 1) < 3 );
      Acl = RtlULongLongAdd(v934, 4uLL, &v934);
      if ( Acl < 0 )
      {
LABEL_1336:
        v544 = v1162;
        v545 = v1206;
        goto LABEL_1337;
      }
      v545 = (_QWORD *)v934;
      v1162 = v544;
      if ( !v544 )
        v545 = 0LL;
      v1206 = v545;
LABEL_1337:
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v544 != 8 )
      {
        Acl = -1073741789;
        goto LABEL_752;
      }
      v1216 = *v545;
LABEL_1341:
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v867[1] )
      {
        if ( v540 > 4 )
        {
          v546 = v867[1];
          v936 = v867[1];
          do
          {
            Acl = RtlULongLongAdd(v546, 4uLL, &v936);
            if ( Acl < 0 )
              goto LABEL_1354;
            Acl = RtlULongLongAdd(v936, v547, &v936);
            if ( Acl < 0 )
              goto LABEL_1354;
            v546 = v936;
          }
          while ( (unsigned int)(v548 + 1) < 4 );
          Acl = RtlULongLongAdd(v936, 4uLL, &v936);
          if ( Acl < 0 )
          {
LABEL_1354:
            v549 = v1059;
            v550 = v1208;
            goto LABEL_1355;
          }
          v550 = (void **)v936;
          v1059 = v549;
          if ( !v549 )
            v550 = 0LL;
          v1208 = v550;
LABEL_1355:
          if ( Acl < 0 )
            goto LABEL_142;
          if ( v549 != 8 )
          {
            Acl = -1073741762;
            goto LABEL_752;
          }
          v1166 = *v550;
          v1185 = v1166;
        }
        else
        {
          Acl = -1073741811;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v867[1] )
      {
        if ( v540 > 5 )
        {
          v551 = v867[1];
          v938 = v867[1];
          do
          {
            Acl = RtlULongLongAdd(v551, 4uLL, &v938);
            if ( Acl < 0 )
              goto LABEL_1372;
            Acl = RtlULongLongAdd(v938, v552, &v938);
            if ( Acl < 0 )
              goto LABEL_1372;
            v551 = v938;
          }
          while ( (unsigned int)(v553 + 1) < 5 );
          Acl = RtlULongLongAdd(v938, 4uLL, &v938);
          if ( Acl < 0 )
          {
LABEL_1372:
            v554 = v1167;
            v555 = v1212;
            goto LABEL_1373;
          }
          v555 = (UINT *)v938;
          v1167 = v554;
          if ( !v554 )
            v555 = 0LL;
          v1212 = v555;
LABEL_1373:
          if ( Acl < 0 )
            goto LABEL_142;
          if ( v554 != 4 )
          {
            Acl = -1073741789;
            goto LABEL_752;
          }
          v912 = *v555;
        }
        else
        {
          Acl = -1073741811;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v912 != 16 )
      {
        v5 = v866;
        Acl = -1073741762;
        goto LABEL_2088;
      }
      if ( !v1185 )
        goto LABEL_751;
      v556 = ObReferenceObjectByHandle(v1185, 0, (POBJECT_TYPE)IoFileObjectType, 1, &v1168, 0LL);
      v557 = (struct _FILE_OBJECT *)v1168;
      Acl = v556;
      if ( v556 < 0 )
        goto LABEL_1398;
      v558 = (size_t *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
      if ( !v558 )
      {
        Acl = -1073741801;
        goto LABEL_1398;
      }
      Acl = FsRtlKernelFsControlFile(v557, v558, 0x248u, (__int64)v874);
      if ( Acl < 0 )
        goto LABEL_1397;
      if ( v874[0] < 0x40u )
      {
        Acl = -1073741762;
        goto LABEL_1397;
      }
      v901[0] = *v558;
      if ( v557->WriteAccess )
      {
        Acl = FsRtlKernelFsControlFile(v557, v558, 0x248u, (__int64)v874);
        if ( Acl < 0 )
          goto LABEL_1397;
        if ( v874[0] < 8u )
        {
          Acl = -1073741762;
          goto LABEL_1397;
        }
        v559 = *v558;
      }
      else
      {
        Acl = FsRtlKernelFsControlFile(v557, v558, 0x248u, (__int64)v874);
        if ( Acl < 0 )
          goto LABEL_1397;
        if ( v874[0] < 0x40u )
        {
          Acl = -1073741762;
          goto LABEL_1397;
        }
        v559 = v558[3];
      }
      v901[1] = v559;
      v1247 = *(_OWORD *)v901;
LABEL_1397:
      ExFreePoolWithTag(v558, 0x20534C53u);
LABEL_1398:
      if ( v557 )
        ObfDereferenceObject(v557);
      if ( Acl < 0 )
        goto LABEL_142;
      v910 = 0;
      v560 = RtlUIntAdd(4u, 8u, &v1061);
      v561 = v1007;
      Acl = v560;
      if ( v560 >= 0 )
        v561 = v1061;
      v1007 = v561;
      if ( v560 < 0 )
        goto LABEL_752;
      Acl = RtlUIntAdd(0, v561, &v910);
      if ( Acl < 0 )
        goto LABEL_752;
      v562 = RtlUIntAdd(4u, v912, &v1117);
      Acl = v562;
      if ( v562 >= 0 )
        v563 = v1117;
      v1007 = v563;
      if ( v562 < 0 )
        goto LABEL_752;
      Acl = RtlUIntAdd(v910, v563, &v910);
      if ( Acl < 0 )
        goto LABEL_752;
      uAugend[0] = v910;
      if ( !v910 )
      {
        Acl = -1073741762;
        goto LABEL_752;
      }
      v564 = ExAllocatePoolWithTag(PagedPool, v910, 0x20534C53u);
      if ( !v564 )
      {
        Acl = -1073741801;
        goto LABEL_752;
      }
      v565 = 0;
      *(_QWORD *)&uAugend[1] = v564;
      v864 = 0;
      v1191 = v1216;
      if ( &v1191 )
      {
        Acl = RtlULongLongAdd((ULONGLONG)v564, 4uLL, v1265);
        if ( Acl >= 0 )
        {
          if ( v566 + 3 > (_DWORD *)((char *)v566 + uAugend[0]) )
          {
            Acl = -1073741789;
            goto LABEL_752;
          }
          v567 = (_QWORD *)v1265[0];
          *v566 = 8;
          *v567 = v1191;
          v565 = ++v864;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v568 = v912;
      if ( &v1247 )
      {
        if ( !v912 )
          goto LABEL_751;
      }
      else if ( v912 )
      {
        goto LABEL_751;
      }
      if ( *(_QWORD *)&uAugend[1] )
      {
        v571 = *(UINT **)&uAugend[1];
        v1144 = *(_QWORD *)&uAugend[1];
        if ( v565 )
        {
          while ( 1 )
          {
            v572 = RtlUIntAdd(4u, *v571, &v1147);
            Acl = v572;
            if ( v572 >= 0 )
              v573 = v1147;
            v961 = v573;
            if ( v572 < 0 )
              break;
            Acl = RtlULongLongAdd(v574, v573, &v1144);
            if ( Acl < 0 )
              break;
            v571 = (UINT *)v1144;
            if ( v575 + 1 >= v565 )
              goto LABEL_1436;
          }
        }
        else
        {
LABEL_1436:
          Acl = RtlULongLongAdd((ULONGLONG)v571, 4uLL, v1267);
          if ( Acl >= 0 )
          {
            if ( (unsigned __int64)v576 + v568 + 4 <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
            {
              v577 = (void *)v1267[0];
              *v576 = v568;
              memmove(v577, &v1247, v568);
              ++v864;
            }
            else
            {
              Acl = -1073741789;
            }
          }
        }
      }
      else
      {
        v569 = RtlUIntAdd(4u, v912, &v1063);
        v570 = v961;
        Acl = v569;
        if ( v569 >= 0 )
          v570 = v1063;
        v961 = v570;
        if ( v569 >= 0 )
        {
          Acl = RtlUIntAdd(uAugend[0], v570, uAugend);
          if ( Acl >= 0 )
          {
            ++v864;
            Acl = 0;
          }
        }
      }
      goto LABEL_752;
    case 23:
      v478 = SeExports;
      v479 = RtlLengthSid(SeExports->SeNetworkServiceSid);
      v480 = RtlLengthSid(v478->SeLocalServiceSid) + v479;
      v481 = v480 + RtlLengthSid(v478->SeAliasAdminsSid) + 32;
      v482 = (ACL *)ExAllocatePoolWithTag(PagedPool, v481, 0x20534C53u);
      v483 = v482;
      if ( !v482 )
      {
        Acl = -1073741801;
        goto LABEL_1123;
      }
      Acl = RtlCreateAcl(v482, v481, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v483, 2u, 0x20u, SeExports->SeLocalServiceSid);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v483, 2u, 0x20u, SeExports->SeNetworkServiceSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v483, 2u, 0x20u, SeExports->SeAliasAdminsSid);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(v1296, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(v1296, 1u, v483, 0);
                if ( Acl >= 0 )
                {
                  SeCaptureSubjectContext(&v1291);
                  v485 = SeAccessCheck(
                           v1296,
                           &v1291,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           &v1202,
                           &v931);
                  SeReleaseSubjectContext(&v1291);
                  if ( !v485 )
                    Acl = v931;
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v483, 0x20534C53u);
      if ( Acl < 0 )
        goto LABEL_1123;
      v1152 = 0;
      v1140 = 0;
      v1139 = 8;
      Acl = 0;
      v486 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v1139, 8u, &v1152) >= 0 && (v1140 & 0x20) != 0;
      v487 = (const void **)v872;
      v488 = *((_DWORD *)v872 + 4);
      if ( v488 != 160 )
        goto LABEL_1148;
      if ( memcmp(qword_140725170, *((const void **)v872 + 3), 0xA0uLL) || v126[4] != 160 )
        goto LABEL_1147;
      v89 = memcmp(qword_140724BD0, *((const void **)v126 + 3), 0xA0uLL) == 0;
      v487 = (const void **)v872;
      if ( !v89 || *((_DWORD *)v872 + 8) != 8 )
        goto LABEL_1148;
      if ( **((_QWORD **)v872 + 5) == 0x35DCEB18766AABAALL
        && v126[8] == 8
        && **((_QWORD **)v126 + 5) == 0x14CEA8BAE086077CLL )
      {
        goto LABEL_1179;
      }
LABEL_1147:
      v487 = (const void **)v872;
LABEL_1148:
      if ( v486 && v488 == 160 && !memcmp(qword_140724DB0, v487[3], 0xA0uLL) && v126[4] == 160 )
      {
        v489 = memcmp(qword_140724B30, *((const void **)v126 + 3), 0xA0uLL);
        v490 = (const void **)v872;
        if ( !v489
          && *((_DWORD *)v872 + 8) == 8
          && **((_QWORD **)v872 + 5) == 0xF10D668DB2BB8BB9uLL
          && v126[8] == 8
          && **((_QWORD **)v126 + 5) == 0x768DFD321621EA95LL )
        {
          goto LABEL_1178;
        }
      }
      else
      {
        v490 = (const void **)v872;
      }
      if ( v488 != 160 || memcmp(qword_140725030, v490[3], 0xA0uLL) || v126[4] != 160 )
        goto LABEL_1167;
      v89 = memcmp(qword_140724A90, *((const void **)v126 + 3), 0xA0uLL) == 0;
      v491 = (const void **)v872;
      if ( v89 && *((_DWORD *)v872 + 8) == 8 )
      {
        if ( **((_QWORD **)v872 + 5) == 0xB56226AEBAE0318DuLL
          && v126[8] == 8
          && **((_QWORD **)v126 + 5) == 0x86341B0F473E1C86uLL )
        {
          goto LABEL_1179;
        }
LABEL_1167:
        v491 = (const void **)v872;
      }
      if ( !v486
        || v488 != 160
        || memcmp(qword_140724D10, v491[3], 0xA0uLL)
        || v126[4] != 160
        || memcmp(qword_140724810, *((const void **)v126 + 3), 0xA0uLL)
        || *((_DWORD *)v872 + 8) != 8
        || **((_QWORD **)v872 + 5) != 0x4A5686C5B3409A7FLL
        || v126[8] != 8
        || **((_QWORD **)v126 + 5) != 0x9408085E1DC89E40uLL )
      {
        Acl = -2147024891;
      }
LABEL_1178:
      if ( Acl < 0 )
        goto LABEL_1123;
LABEL_1179:
      Acl = 0;
      v1001 = 0;
      v492 = QueryUpdateFileEaAllowedExt_0();
      if ( v492 == -1073741637 || (Acl = v492, v492 >= 0) && v1001 != 1 )
      {
        if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) & 7) == 0 )
          Acl = -2147024891;
      }
LABEL_1123:
      if ( Acl < 0 )
        goto LABEL_2087;
      v484 = v867[0];
      if ( !v867[1] )
      {
        Acl = -1073741811;
        goto LABEL_1200;
      }
      if ( LODWORD(v867[0]) <= 3 )
      {
        Acl = -1073741811;
        goto LABEL_1200;
      }
      v493 = v867[1];
      v926 = v867[1];
      do
      {
        Acl = RtlULongLongAdd(v493, 4uLL, &v926);
        if ( Acl < 0 )
          goto LABEL_1195;
        Acl = RtlULongLongAdd(v926, v494, &v926);
        if ( Acl < 0 )
          goto LABEL_1195;
        v493 = v926;
      }
      while ( (unsigned int)(v495 + 1) < 3 );
      Acl = RtlULongLongAdd(v926, 4uLL, &v926);
      if ( Acl < 0 )
      {
LABEL_1195:
        v496 = v1050;
        v497 = v1221;
        goto LABEL_1196;
      }
      v497 = (void **)v926;
      v1050 = v496;
      if ( !v496 )
        v497 = 0LL;
      v1221 = v497;
LABEL_1196:
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v496 != 8 )
      {
        Acl = -1073741762;
        goto LABEL_752;
      }
      v1243 = *v497;
      Handle = v1243;
LABEL_1200:
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v867[1] )
      {
        if ( v484 > 4 )
        {
          v498 = v867[1];
          v928 = v867[1];
          do
          {
            Acl = RtlULongLongAdd(v498, 4uLL, &v928);
            if ( Acl < 0 )
              goto LABEL_1213;
            Acl = RtlULongLongAdd(v928, v499, &v928);
            if ( Acl < 0 )
              goto LABEL_1213;
            v498 = v928;
          }
          while ( (unsigned int)(v500 + 1) < 4 );
          Acl = RtlULongLongAdd(v928, 4uLL, &v928);
          if ( Acl < 0 )
          {
LABEL_1213:
            v501 = v1154;
            v502 = v1223;
            goto LABEL_1214;
          }
          v502 = (NTSTATUS *)v928;
          v1154 = v501;
          if ( !v501 )
            v502 = 0LL;
          v1223 = v502;
LABEL_1214:
          if ( Acl < 0 )
            goto LABEL_142;
          if ( v501 != 4 )
          {
            Acl = -1073741789;
            goto LABEL_752;
          }
          v1158 = *v502;
        }
        else
        {
          Acl = -1073741811;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v867[1] )
      {
        if ( v484 > 5 )
        {
          v503 = v867[1];
          v930 = v867[1];
          do
          {
            Acl = RtlULongLongAdd(v503, 4uLL, &v930);
            if ( Acl < 0 )
              goto LABEL_1231;
            Acl = RtlULongLongAdd(v930, v504, &v930);
            if ( Acl < 0 )
              goto LABEL_1231;
            v503 = v930;
          }
          while ( (unsigned int)(v505 + 1) < 5 );
          Acl = RtlULongLongAdd(v930, 4uLL, &v930);
          if ( Acl < 0 )
          {
LABEL_1231:
            v506 = v1052;
            v507 = v1201;
            goto LABEL_1232;
          }
          v507 = (NTSTATUS *)v930;
          v1052 = v506;
          if ( !v506 )
            v507 = 0LL;
          v1201 = v507;
LABEL_1232:
          if ( Acl < 0 )
            goto LABEL_142;
          if ( v506 != 4 )
          {
            Acl = -1073741789;
            goto LABEL_752;
          }
          v1054 = *v507;
        }
        else
        {
          Acl = -1073741811;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      if ( !v867[1] || v484 <= 6 )
        goto LABEL_751;
      v508 = v867[1];
      v888 = v867[1];
      do
      {
        Acl = RtlULongLongAdd(v508, 4uLL, &v888);
        if ( Acl < 0 )
          goto LABEL_1247;
        Acl = RtlULongLongAdd(v888, v509, &v888);
        if ( Acl < 0 )
          goto LABEL_1247;
        v508 = v888;
      }
      while ( (unsigned int)(v510 + 1) < 6 );
      Acl = RtlULongLongAdd(v888, 4uLL, &v888);
      if ( Acl < 0 )
      {
LABEL_1247:
        v511 = v1156;
        v512 = v1200;
        goto LABEL_1248;
      }
      v512 = (_QWORD *)v888;
      v1156 = v511;
      if ( !v511 )
        v512 = 0LL;
      v1200 = v512;
LABEL_1248:
      if ( Acl < 0 )
        goto LABEL_142;
      if ( v511 != 16 )
      {
        v5 = v866;
        Acl = -1073741811;
        goto LABEL_2088;
      }
      v513 = 0LL;
      v951 = v1054;
      v931 = v1158;
      v888 = 0LL;
      TargetFile = 0LL;
      if ( !Handle || !v512 )
        goto LABEL_751;
      v514 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
      v515 = (struct _FILE_OBJECT *)Object;
      Acl = v514;
      if ( v514 < 0 )
        goto LABEL_1289;
      v516 = (size_t *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
      if ( !v516 )
        goto LABEL_1287;
      Acl = FsRtlKernelFsControlFile(v515, v516, 0x248u, (__int64)&v932);
      if ( Acl >= 0 )
      {
        if ( v932 >= 0x40 )
        {
          v901[0] = *v516;
          Acl = FsRtlKernelFsControlFile(v515, v516, 0x248u, (__int64)&v932);
          if ( Acl >= 0 )
          {
            if ( v932 >= 0x40 )
            {
              v901[1] = v516[3];
              v1299 = *(_OWORD *)v901;
            }
            else
            {
              Acl = -1073741762;
            }
          }
        }
        else
        {
          Acl = -1073741762;
        }
      }
      ExFreePoolWithTag(v516, 0x20534C53u);
      if ( Acl < 0 )
        goto LABEL_1288;
      if ( (_QWORD)v1299 != *v512 )
      {
        Acl = -1073741762;
LABEL_1288:
        v513 = (void *)v888;
        goto LABEL_1289;
      }
      if ( *((_QWORD *)&v1299 + 1) != v512[1] )
      {
        Acl = -1073741762;
        goto LABEL_1288;
      }
      if ( v931 )
      {
        *(_QWORD *)&v1299 = -1LL;
        *((_QWORD *)&v1299 + 1) = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        if ( ObOpenObjectByPointer(v515, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &TargetFile) >= 0 )
        {
          v517 = 0;
          if ( (unsigned int)(v951 - 2) <= 1 )
            v517 = 6;
          ZwSetCachedSigningLevel(2u, v517, &TargetFile, 1u, TargetFile);
        }
        v518 = (size_t *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
        if ( !v518 )
          goto LABEL_1287;
        Acl = FsRtlKernelFsControlFile(v515, v518, 0x248u, (__int64)&v952);
        if ( Acl >= 0 )
        {
          if ( v952 >= 0x40 )
          {
            v901[0] = *v518;
            Acl = FsRtlKernelFsControlFile(v515, v518, 0x248u, (__int64)&v952);
            if ( Acl >= 0 )
            {
              if ( v952 >= 0x40 )
              {
                v901[1] = v518[3];
                v1299 = *(_OWORD *)v901;
              }
              else
              {
                Acl = -1073741762;
              }
            }
          }
          else
          {
            Acl = -1073741762;
          }
        }
        ExFreePoolWithTag(v518, 0x20534C53u);
        if ( Acl < 0 )
          goto LABEL_1288;
      }
      v519 = (char *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
      v520 = v519;
      if ( !v519 )
      {
LABEL_1287:
        Acl = -1073741801;
        goto LABEL_1288;
      }
      v521 = (unsigned __int8 *)&v1299;
      *(_QWORD *)v519 = 0LL;
      *((_QWORD *)v519 + 1) = 0LL;
      *((_QWORD *)v519 + 2) = 0LL;
      *((_QWORD *)v519 + 3) = 0LL;
      v519[33] = 0;
      *((_WORD *)v519 + 17) = 0;
      *((_DWORD *)v519 + 9) = 0;
      *((_QWORD *)v519 + 5) = 0LL;
      *((_QWORD *)v519 + 6) = 0LL;
      *((_WORD *)v519 + 28) = 0;
      v519[4] = 0;
      *((_WORD *)v519 + 3) = 24;
      v519[5] = 25;
      strcpy(v519 + 8, "$Kernel.Purge.AppxFICach");
      v1009 = 0LL;
      v522 = 0;
      v523 = 0;
      v1193 = 0LL;
      v524 = 16LL;
      do
      {
        v525 = *v521++;
        v525 -= 23737705;
        v523 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v523 + v525), 21), 21), 21);
        v522 += v523 + v525;
        v1009 = __PAIR64__(v523, v522);
        --v524;
      }
      while ( v524 );
      v1193 = v1009;
      *(_OWORD *)(v520 + 34) = v1299;
      *(_QWORD *)(v520 + 50) = v1193;
      v513 = v520;
      Acl = FsRtlSetKernelEaFile(v515);
LABEL_1289:
      if ( TargetFile )
        ZwClose(TargetFile);
      if ( v515 )
        ObfDereferenceObject(v515);
      if ( v513 )
        ExFreePoolWithTag(v513, 0x20534C53u);
      if ( Acl < 0 )
        goto LABEL_142;
      v1003 = 0;
      if ( &v1003 )
      {
        if ( *(_QWORD *)&uAugend[1] )
        {
          v528 = *(UINT **)&uAugend[1];
          v1142 = *(_QWORD *)&uAugend[1];
          if ( v864 )
          {
            while ( 1 )
            {
              v529 = RtlUIntAdd(4u, *v528, &v1160);
              Acl = v529;
              if ( v529 >= 0 )
                v530 = v1160;
              v959 = v530;
              if ( v529 < 0 )
                break;
              Acl = RtlULongLongAdd(v531, v530, &v1142);
              if ( Acl < 0 )
                break;
              v528 = (UINT *)v1142;
              if ( v532 + 1 >= v864 )
                goto LABEL_1309;
            }
          }
          else
          {
LABEL_1309:
            Acl = RtlULongLongAdd((ULONGLONG)v528, 4uLL, v1261);
            if ( Acl >= 0 )
            {
              if ( (unsigned __int64)(v534 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
              {
                Acl = -1073741789;
                goto LABEL_752;
              }
              v535 = (_DWORD *)v1261[0];
              *v534 = v533;
              *v535 = v1003;
              ++v864;
            }
          }
        }
        else
        {
          v526 = RtlUIntAdd(4u, 4u, &v1056);
          v527 = v959;
          Acl = v526;
          if ( v526 >= 0 )
            v527 = v1056;
          v959 = v527;
          if ( v526 >= 0 )
          {
            Acl = RtlUIntAdd(uAugend[0], v527, uAugend);
            if ( Acl >= 0 )
            {
              ++v864;
              goto LABEL_1315;
            }
          }
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_142;
LABEL_1315:
      if ( !uAugend[0] )
      {
        Acl = -1073741762;
        goto LABEL_752;
      }
      v536 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
      if ( !v536 )
      {
        Acl = -1073741801;
        goto LABEL_752;
      }
      *(_QWORD *)&uAugend[1] = v536;
      v864 = 0;
      v1005 = 0;
      if ( &v1005 )
      {
        Acl = RtlULongLongAdd((ULONGLONG)v536, 4uLL, v1263);
        if ( Acl >= 0 )
        {
          if ( v538 + 2 <= (_DWORD *)((char *)v538 + uAugend[0]) )
          {
            v539 = (_DWORD *)v1263[0];
            *v538 = v537;
            *v539 = v1005;
            ++v864;
          }
          else
          {
            Acl = -1073741789;
          }
        }
        goto LABEL_752;
      }
LABEL_751:
      Acl = -1073741811;
LABEL_752:
      if ( Acl < 0 )
        goto LABEL_142;
LABEL_757:
      v1177 = __rdtsc();
      v899 = 8;
      Acl = RtlUIntAdd(8u, uAugend[0], &v899);
      if ( Acl >= 0 )
      {
        v330 = (v899 + 7) & 0xFFFFFFF8;
        if ( v330 >= v899 )
        {
          v899 = (v899 + 7) & 0xFFFFFFF8;
          if ( v330 )
          {
            v774 = (char *)ExAllocatePoolWithTag(PagedPool, v330, 0x20534C53u);
            v775 = v774;
            if ( v774 )
            {
              v892 = (ULONGLONG)v774;
              *(_DWORD *)v774 = v864;
              Acl = RtlULongLongAdd((ULONGLONG)v774, 4uLL, &v892);
              if ( Acl >= 0 )
              {
                v777 = v892;
                *(_DWORD *)v892 = uAugend[0];
                Acl = RtlULongLongAdd(v777, v776, &v892);
                if ( Acl >= 0 )
                {
                  *(_QWORD *)&v775[v899 - 8] = v1177;
                  memmove((void *)v892, *(const void **)&uAugend[1], uAugend[0]);
                  v778 = v899;
                  v779 = (unsigned __int64)v775;
                  v954 = v775;
                  goto LABEL_1994;
                }
              }
              ExFreePoolWithTag(v775, 0x20534C53u);
            }
            else
            {
              Acl = -1073741801;
            }
          }
          else
          {
            Acl = -1073741762;
          }
        }
        else
        {
          Acl = -1073741675;
        }
      }
      v778 = v876;
      v779 = v876;
LABEL_1994:
      if ( Acl < 0 )
        goto LABEL_142;
      v1055 = 0LL;
      v1240 = 0LL;
      if ( !v779 )
      {
        v5 = v866;
        Acl = -1073741811;
        goto LABEL_2088;
      }
      if ( !v778 )
      {
        v5 = v866;
        Acl = -1073741811;
        goto LABEL_2088;
      }
      v780 = (__int64 *)*((_QWORD *)v126 + 5);
      if ( !v780 )
      {
        v5 = v866;
        Acl = -1073741811;
        goto LABEL_2088;
      }
      v781 = v126[8];
      if ( !v781 )
      {
        v5 = v866;
        Acl = -1073741811;
        goto LABEL_2088;
      }
      v782 = *((_QWORD *)v126 + 3);
      v892 = v782;
      if ( !v782 || (v783 = v126[4]) == 0 )
      {
LABEL_2086:
        Acl = -1073741811;
        goto LABEL_2087;
      }
      Src = (void *)v778;
      if ( v781 != 8 || v783 != 160 )
        goto LABEL_2053;
      v784 = *v780;
      LOBYTE(v781) = 0;
      v885 = v781;
      v785 = 0LL;
      if ( v778 >= 0x20uLL )
      {
        v786 = 0LL;
        v787 = 0LL;
        v788 = (unsigned __int8 *)(v779 + 16);
        do
        {
          v789 = _mm_loadu_si128((const __m128i *)v788 - 1);
          v785 += 32LL;
          v788 += 32;
          v786 = _mm_xor_si128(v789, v786);
          v790 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v788 - 2), v787);
          v787 = v790;
        }
        while ( v785 < v778 - (unsigned __int64)(v778 & 0x1F) );
        v791 = _mm_xor_si128(v786, v790);
        v792 = _mm_xor_si128(v791, _mm_srli_si128(v791, 8));
        v793 = _mm_xor_si128(v792, _mm_srli_si128(v792, 4));
        v794 = _mm_xor_si128(v793, _mm_srli_si128(v793, 2));
        v781 = _mm_cvtsi128_si32(_mm_xor_si128(v794, _mm_srli_si128(v794, 1)));
        v885 = v781;
      }
      if ( v785 < v778 )
      {
        do
        {
          LOBYTE(v781) = *(_BYTE *)(v785 + v779) ^ v781;
          ++v785;
        }
        while ( v785 < v778 );
        v885 = v781;
      }
      v795 = ExAllocatePoolWithTag(PagedPool, v778 + 8LL, 0x20534C53u);
      v1166 = v795;
      if ( v795 )
      {
        v1298 = v784;
        v901[0] = (unsigned __int8)Src & 7;
        v796 = v795;
        v971 = v795;
        v797 = 0;
        v871 = 0;
        v869 = -1;
        v874[0] = 0;
        v876 = 0;
        if ( ((unsigned __int8)Src & 7) != 0 )
        {
          v874[0] = 0;
          v798 = 0;
          v876 = 0;
          v799 = 0;
          v800 = 0;
          v801 = 56;
          do
          {
            v802 = *(unsigned __int8 *)v779;
            if ( v800 >= 4 )
              v798 |= v802 << v801;
            else
              v799 |= v802 << (v801 - 32);
            ++v779;
            ++v800;
            v801 -= 8;
          }
          while ( v800 < ((unsigned __int8)Src & 7) );
          v876 = v799;
          v874[0] = v798;
          v803 = 16LL;
          v804 = (unsigned __int8 *)(v782 + 158);
          v805 = (unsigned __int8 *)(v892 + 126);
          v883 = 16LL;
          v806 = 30;
          do
          {
            v807 = v804[1];
            if ( v807 < 0x1Fu )
            {
              v808 = funcs_14051232E[v807](v806 + 1, *(v805 - 2), *(v805 - 1), *v805, v805[1], (__int64)&v1298, v797);
              v797 = v871;
              v31 = v808 ^ v869;
              v803 = v883;
              v869 ^= v808;
            }
            if ( *v804 < 0x1Fu )
            {
              v809 = funcs_14051232E[*v804](
                       v806,
                       *(v805 - 6),
                       *(v805 - 5),
                       *(v805 - 4),
                       *(v805 - 3),
                       (__int64)&v1298,
                       v31);
              v31 = v869;
              v797 = v809 ^ v871;
              v803 = v883;
              v871 ^= v809;
            }
            v806 -= 2;
            v805 -= 8;
            v804 -= 2;
            v883 = --v803;
          }
          while ( v803 );
          v797 ^= v876;
          v810 = v874[0] ^ v31;
          v811 = 0;
          v812 = v901[0];
          v796 = v971;
          v126 = (unsigned int *)v972;
          v871 = v797;
          v869 = v810;
          if ( SLODWORD(v901[0]) > 0 )
          {
            do
            {
              if ( v811 >= 4 )
              {
                v810 = __ROL4__(v810, 8);
                *v796 = v810;
              }
              else
              {
                v797 = __ROL4__(v797, 8);
                *v796 = v797;
              }
              ++v796;
              ++v811;
            }
            while ( v811 < v812 );
            v797 = v871;
            v810 = v869;
          }
          v813 = v812 - 4;
          if ( v812 - 4 <= 0 )
          {
            v869 = 0;
            v31 = 0;
            if ( v813 < 0 )
            {
              v797 = v797 >> (-8 * v813) << (-8 * v813);
              v871 = v797;
            }
          }
          else
          {
            v31 = v810 >> (8 * (4 - v813)) << (8 * (4 - v813));
            v869 = v31;
          }
          v782 = v892;
        }
        v814 = (char *)Src;
        i = (unsigned __int64)Src >> 3;
        if ( (unsigned __int64)Src >> 3 )
        {
          v815 = (_BYTE *)(v782 + 129);
          v816 = (unsigned __int8 *)(v782 + 2);
          v971 = (_QWORD *)(v782 + 129);
          v1168 = (PVOID)(v782 + 2);
          v817 = (unsigned __int8 *)(v779 + 2);
          Timeout.QuadPart = (LONGLONG)(v796 + 7);
          do
          {
            v818 = v815;
            v819 = 0;
            v820 = v816;
            v821 = v817[3] | (v817[2] << 8);
            v970 = v817[1] | ((*v817 | ((*(v817 - 1) | (*(v817 - 2) << 8)) << 8)) << 8);
            v822 = v970 ^ v797;
            v823 = v817[5] | ((v817[4] | (v821 << 8)) << 8);
            v871 = v822;
            v824 = v823 ^ v31;
            v869 = v824;
            v901[0] = (size_t)(v817 + 8);
            v825 = 16LL;
            v883 = 16LL;
            do
            {
              v826 = *(v818 - 1);
              if ( v826 < 0x1Fu )
              {
                v827 = funcs_14051232E[v826](v819, *(v820 - 2), *(v820 - 1), *v820, v820[1], (__int64)&v1298, v824);
                v824 = v869;
                v822 = v827 ^ v871;
                v825 = v883;
                v871 ^= v827;
              }
              if ( *v818 < 0x1Fu )
              {
                v828 = funcs_14051232E[(unsigned __int8)*v818](
                         v819 + 1,
                         v820[2],
                         v820[3],
                         v820[4],
                         v820[5],
                         (__int64)&v1298,
                         v822);
                v822 = v871;
                v824 = v828 ^ v869;
                v825 = v883;
                v869 ^= v828;
              }
              v819 += 2;
              v820 += 8;
              v818 += 2;
              v883 = --v825;
            }
            while ( v825 );
            v829 = (HIWORD(v1298) * ((unsigned __int16)v1298 + __ROR4__(~v824, 5))) ^ v822;
            v830 = (v829 >> 10) ^ (WORD1(v1298) * (v829 ^ HIWORD(v1298))) ^ v824;
            v831 = __ROR4__(v830, 10) ^ (WORD2(v1298) * __ROR4__(v830 ^ v1298, 12)) ^ v829;
            v832 = (HIWORD(v1298) * __ROR4__(v831 - v1298, 14) - __ROL4__(v831, 8)) ^ v830;
            v833 = (__ROL4__(v832, 2) + (unsigned __int16)v1298 * __ROR4__(HIDWORD(v1298) + v832, 15)) ^ v831;
            v834 = (WORD1(v1298) * (v833 ^ WORD2(v1298))) ^ __ROR4__(v833, 6) ^ v832;
            v835 = (HIDWORD(v1298) - (v834 ^ v1298)) ^ v833;
            v836 = (HIWORD(v1298) * __ROL4__(v835 ^ WORD1(v1298), 6) - __ROL4__(v835, 2)) ^ v834;
            v837 = ((unsigned __int16)v1298 * (v836 - WORD2(v1298)) - (v836 >> 13)) ^ v835;
            v838 = (WORD1(v1298) * __ROR4__(HIDWORD(v1298) + v837, 9) - __ROL4__(v837, 2)) ^ v836;
            v839 = v970;
            v816 = (unsigned __int8 *)v1168;
            v817 = (unsigned __int8 *)v901[0];
            v840 = (__ROL4__(v838, 10) + WORD2(v1298) * __ROL4__(v838 - v1298, 5)) ^ v837;
            v841 = (_BYTE *)Timeout.QuadPart;
            v871 = v876 ^ v840;
            v869 = v874[0] ^ v840 ^ v838 ^ v1298 ^ HIDWORD(v1298);
            *(_BYTE *)(Timeout.QuadPart - 4) = v876 ^ v840;
            v871 = __ROR4__(v871, 8);
            *v841 = v869;
            v869 = __ROR4__(v869, 8);
            *(v841 - 5) = v871;
            v871 = __ROR4__(v871, 8);
            *(v841 - 1) = v869;
            v869 = __ROR4__(v869, 8);
            *(v841 - 6) = v871;
            v871 = __ROR4__(v871, 8);
            *(v841 - 2) = v869;
            v869 = __ROR4__(v869, 8);
            *(v841 - 7) = v871;
            *(v841 - 3) = v869;
            v797 = __ROR4__(v871, 8);
            v31 = __ROR4__(v869, 8);
            v89 = i-- == 1;
            Timeout.QuadPart = (LONGLONG)(v841 + 8);
            v815 = v971;
            v871 = v797;
            v869 = v31;
            v876 = v839;
            v874[0] = v823;
          }
          while ( !v89 );
          v126 = (unsigned int *)v972;
          v814 = (char *)Src;
        }
        v842 = v1166;
        v843 = (_DWORD)v814 + 8;
        *(_QWORD *)&v814[(_QWORD)v1166] = (unsigned __int8)v885;
        v1055 = v842;
        Acl = 0;
        v1240 = v814 + 8;
        if ( (_DWORD)v814 == -8 )
        {
          Acl = -1073741762;
        }
        else
        {
          v844 = ExAllocatePoolWithTag(PagedPool, v843, 0x20534C53u);
          v845 = v844;
          if ( v844 )
          {
            memmove(v844, v842, v843);
            *((_QWORD *)v126 + 1) = v845;
            *v126 = v843;
          }
          else
          {
            Acl = -1073741801;
          }
        }
      }
      else
      {
LABEL_2053:
        Acl = -1073741823;
      }
      if ( v1055 )
      {
        ExFreePoolWithTag(v1055, 0x20534C53u);
        v1055 = 0LL;
      }
      if ( Acl < 0 )
        goto LABEL_142;
      v846 = *v126;
      v873 = 4;
      Acl = RtlUIntAdd(4u, v846, &v873);
      if ( Acl < 0
        || (Acl = RtlUIntAdd(v873, v847, &v873), Acl < 0)
        || (Acl = RtlUIntAdd(v873, v126[4], &v873), Acl < 0)
        || (Acl = RtlUIntAdd(v873, 4u, &v873), Acl < 0) )
      {
        v848 = v921;
      }
      else
      {
        Acl = RtlUIntAdd(v873, v126[8], &v873);
        v848 = v921;
        if ( Acl >= 0 )
          v848 = v873;
        v921 = v848;
      }
      if ( Acl < 0 )
        goto LABEL_2078;
      if ( !v848 )
      {
        Acl = -1073741762;
LABEL_2078:
        v854 = v866;
        v853 = (unsigned int)v866;
        goto LABEL_2079;
      }
      v849 = ExAllocatePoolWithTag(PagedPool, v848, 0x20534C53u);
      v850 = v849;
      if ( !v849 )
      {
        Acl = -1073741801;
        goto LABEL_2078;
      }
      v894 = (ULONGLONG)v849;
      *v849 = *v126;
      Acl = RtlULongLongAdd((ULONGLONG)v849, 4uLL, &v894);
      if ( Acl < 0 )
        goto LABEL_2077;
      memmove((void *)v894, *((const void **)v126 + 1), *v126);
      Acl = RtlULongLongAdd(v894, *v126, &v894);
      if ( Acl < 0 )
        goto LABEL_2077;
      v851 = v894;
      *(_DWORD *)v894 = v126[4];
      Acl = RtlULongLongAdd(v851, 4uLL, &v894);
      if ( Acl < 0
        || (memmove((void *)v894, *((const void **)v126 + 3), v126[4]),
            Acl = RtlULongLongAdd(v894, v126[4], &v894),
            Acl < 0)
        || (v852 = v894, *(_DWORD *)v894 = v126[8], Acl = RtlULongLongAdd(v852, 4uLL, &v894), Acl < 0)
        || (memmove((void *)v894, *((const void **)v126 + 5), v126[8]),
            Acl = RtlULongLongAdd(v894, v126[8], &v894),
            Acl < 0) )
      {
LABEL_2077:
        ExFreePoolWithTag(v850, 0x20534C53u);
        goto LABEL_2078;
      }
      v853 = v921;
      v854 = v850;
      v866 = v850;
LABEL_2079:
      if ( Acl < 0 )
        goto LABEL_142;
      v5 = 0LL;
      *v1242 = v854;
      *v1244 = v853;
LABEL_2088:
      v867[0] = 0LL;
      if ( v867[1] )
      {
        ExFreePoolWithTag((PVOID)v867[1], 0x20534C53u);
        v867[1] = 0LL;
      }
LABEL_2090:
      uAugend[0] = 0;
      v864 = 0;
      if ( *(_QWORD *)&uAugend[1] )
      {
        ExFreePoolWithTag(*(PVOID *)&uAugend[1], 0x20534C53u);
        *(_QWORD *)&uAugend[1] = 0LL;
      }
      if ( v1038 )
        ExFreePoolWithTag(v1038, 0x20534C53u);
      v855 = v872;
      if ( v872 )
      {
        v856 = (void *)*((_QWORD *)v872 + 1);
        if ( v856 )
        {
          ExFreePoolWithTag(v856, 0x20534C53u);
          v855[1] = 0LL;
        }
        v857 = (void *)v855[3];
        if ( v857 )
        {
          ExFreePoolWithTag(v857, 0x20534C53u);
          v855[3] = 0LL;
        }
        v858 = (void *)v855[5];
        if ( v858 )
        {
          ExFreePoolWithTag(v858, 0x20534C53u);
          v855[5] = 0LL;
        }
        ExFreePoolWithTag(v855, 0x20534C53u);
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0x20534C53u);
      v859 = v972;
      if ( v972 )
      {
        v860 = (void *)*((_QWORD *)v972 + 1);
        if ( v860 )
        {
          ExFreePoolWithTag(v860, 0x20534C53u);
          v859[1] = 0LL;
        }
        v861 = (void *)v859[3];
        if ( v861 )
        {
          ExFreePoolWithTag(v861, 0x20534C53u);
          v859[3] = 0LL;
        }
        v862 = (void *)v859[5];
        if ( v862 )
        {
          ExFreePoolWithTag(v862, 0x20534C53u);
          v859[5] = 0LL;
        }
        ExFreePoolWithTag(v859, 0x20534C53u);
      }
      if ( v954 )
        ExFreePoolWithTag(v954, 0x20534C53u);
      return (unsigned int)Acl;
    case 24:
      v578 = v867[0];
      v579 = 0;
      if ( !v867[1] )
      {
        Acl = -1073741811;
        goto LABEL_1456;
      }
      if ( LODWORD(v867[0]) <= 3 )
      {
        Acl = -1073741811;
        goto LABEL_1456;
      }
      v580 = v867[1];
      v940 = v867[1];
      do
      {
        Acl = RtlULongLongAdd(v580, 4uLL, &v940);
        if ( Acl < 0 )
          goto LABEL_1452;
        Acl = RtlULongLongAdd(v940, v581, &v940);
        if ( Acl < 0 )
          goto LABEL_1452;
        v580 = v940;
      }
      while ( (unsigned int)(v582 + 1) < 3 );
      Acl = RtlULongLongAdd(v940, 4uLL, &v940);
      if ( Acl < 0 )
      {
LABEL_1452:
        v583 = v1065;
        v584 = v1218;
        goto LABEL_1453;
      }
      v584 = (_QWORD *)v940;
      v1065 = v583;
      if ( !v583 )
        v584 = 0LL;
      v1218 = v584;
LABEL_1453:
      if ( Acl < 0 )
        goto LABEL_1557;
      if ( v583 != 8 )
      {
LABEL_1556:
        Acl = -1073741789;
        goto LABEL_1557;
      }
      v1224 = *v584;
LABEL_1456:
      if ( Acl < 0 )
        goto LABEL_1557;
      if ( v867[1] )
      {
        if ( v578 > 4 )
        {
          v585 = v867[1];
          v942 = v867[1];
          do
          {
            Acl = RtlULongLongAdd(v585, 4uLL, &v942);
            if ( Acl < 0 )
              goto LABEL_1469;
            Acl = RtlULongLongAdd(v942, v586, &v942);
            if ( Acl < 0 )
              goto LABEL_1469;
            v585 = v942;
          }
          while ( (unsigned int)(v587 + 1) < 4 );
          Acl = RtlULongLongAdd(v942, 4uLL, &v942);
          if ( Acl < 0 )
          {
LABEL_1469:
            v588 = v1119;
            v589 = v1220;
            goto LABEL_1470;
          }
          v589 = (_QWORD **)v942;
          v1119 = v588;
          if ( !v588 )
            v589 = 0LL;
          v1220 = v589;
LABEL_1470:
          if ( Acl < 0 )
            goto LABEL_1557;
          if ( v588 != 8 )
          {
            Acl = -1073741762;
            goto LABEL_1557;
          }
          v971 = *v589;
          v1176 = v971;
        }
        else
        {
          Acl = -1073741811;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_1557;
      v590 = 0LL;
      v591 = 0LL;
      if ( !v1176 )
      {
        Acl = -1073741811;
        goto LABEL_1557;
      }
      v592 = ObReferenceObjectByHandle(v1176, 0, (POBJECT_TYPE)IoFileObjectType, 1, &v902, 0LL);
      v593 = (struct _FILE_OBJECT *)v902;
      Acl = v592;
      if ( v592 < 0 )
        goto LABEL_1512;
      v594 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1FuLL, 0x20534C53u);
      v590 = v594;
      if ( !v594 )
      {
        Acl = -1073741801;
        goto LABEL_1512;
      }
      *(_QWORD *)v594 = 0LL;
      *((_QWORD *)v594 + 1) = 0LL;
      *((_QWORD *)v594 + 2) = 0LL;
      *((_DWORD *)v594 + 6) = 0;
      v594[29] = 0;
      v594[4] = 25;
      *(_DWORD *)v594 = 0;
      strcpy(v594 + 5, "$Kernel.Purge.AppxFICac");
      strcpy(v594 + 29, "e");
      v595 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
      v591 = v595;
      if ( !v595 )
      {
        Acl = -1073741801;
        goto LABEL_1512;
      }
      *(_QWORD *)v595 = 0LL;
      *((_QWORD *)v595 + 1) = 0LL;
      *((_QWORD *)v595 + 2) = 0LL;
      *((_QWORD *)v595 + 3) = 0LL;
      *((_QWORD *)v595 + 4) = 0LL;
      *((_QWORD *)v595 + 5) = 0LL;
      *((_QWORD *)v595 + 6) = 0LL;
      v595[28] = 0;
      KernelEaFile = FsRtlQueryKernelEaFile(v593, (__int64)v590, 31, 0LL, 1, (__int64)&v1067);
      Acl = KernelEaFile;
      if ( KernelEaFile == -1073741275 )
      {
        Acl = 0;
        goto LABEL_1511;
      }
      if ( KernelEaFile < 0 )
        goto LABEL_1512;
      v597 = v591[3];
      v598 = (__int64)v591 + *((unsigned __int8 *)v591 + 5) + 9;
      v971 = (_QWORD *)v598;
      if ( v598 + v597 > (unsigned __int64)v591 + (unsigned int)v1067 )
      {
        Acl = -1073741762;
        goto LABEL_1512;
      }
      if ( !(_WORD)v597 )
      {
        Acl = 0;
        goto LABEL_1511;
      }
      if ( (_DWORD)v597 != 24 )
      {
        Acl = -1073741762;
        goto LABEL_1512;
      }
      Source2 = 0LL;
      if ( !v598 )
      {
        Acl = -1073741811;
        goto LABEL_1512;
      }
      v1011 = 0LL;
      v599 = (unsigned __int8 *)v598;
      v600 = 0;
      v601 = 16LL;
      v602 = 0;
      do
      {
        v603 = *v599++;
        v603 -= 23737705;
        v600 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v600 + v603), 21), 21), 21);
        v602 += v600 + v603;
        v1011 = __PAIR64__(v600, v602);
        --v601;
      }
      while ( v601 );
      Source2 = v1011;
      Acl = 0;
      if ( RtlCompareMemory((const void *)(v598 + 16), &Source2, 8uLL) != 8 )
      {
        Acl = -1073741762;
        goto LABEL_1512;
      }
      v579 = 2;
      v604 = ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
      P = v604;
      if ( !v604 )
        goto LABEL_1511;
      v605 = FsRtlKernelFsControlFile(v593, v604, 0x248u, (__int64)&v890);
      if ( v605 < 0 )
        goto LABEL_1505;
      v606 = P;
      if ( v890 >= 0x40 )
      {
        v901[0] = *(_QWORD *)P;
        v605 = FsRtlKernelFsControlFile((PFILE_OBJECT)v902, P, 0x248u, (__int64)&v890);
        if ( v605 < 0 )
        {
LABEL_1505:
          v606 = P;
        }
        else
        {
          v606 = P;
          if ( v890 >= 0x40 )
            v901[1] = *((_QWORD *)P + 3);
          else
            v605 = -1073741762;
        }
      }
      else
      {
        v605 = -1073741762;
      }
      ExFreePoolWithTag(v606, 0x20534C53u);
      if ( v605 >= 0 && v901[0] == *v971 && v901[1] == v971[1] )
        v579 = 3;
      v593 = (struct _FILE_OBJECT *)v902;
LABEL_1511:
      v965 = v579;
LABEL_1512:
      if ( v593 )
        ObfDereferenceObject(v593);
      if ( v590 )
        ExFreePoolWithTag(v590, 0x20534C53u);
      if ( v591 )
        ExFreePoolWithTag(v591, 0x20534C53u);
      if ( Acl >= 0 )
      {
        v904 = 0;
        v607 = RtlUIntAdd(4u, 8u, &v1161);
        v608 = v1013;
        Acl = v607;
        if ( v607 >= 0 )
          v608 = v1161;
        v1013 = v608;
        if ( v607 >= 0 )
        {
          Acl = RtlUIntAdd(0, v608, &v904);
          if ( Acl >= 0 )
          {
            v609 = RtlUIntAdd(4u, 4u, &v1068);
            Acl = v609;
            if ( v609 >= 0 )
              v610 = v1068;
            v1013 = v610;
            if ( v609 >= 0 )
            {
              Acl = RtlUIntAdd(v904, v610, &v904);
              if ( Acl >= 0 )
              {
                uAugend[0] = v904;
                if ( !v904 )
                {
                  Acl = -1073741762;
                  goto LABEL_1557;
                }
                v611 = ExAllocatePoolWithTag(PagedPool, v904, 0x20534C53u);
                if ( !v611 )
                {
                  Acl = -1073741801;
                  goto LABEL_1557;
                }
                v612 = 0;
                *(_QWORD *)&uAugend[1] = v611;
                v864 = 0;
                v1180 = v1224;
                if ( &v1180 )
                {
                  Acl = RtlULongLongAdd((ULONGLONG)v611, 4uLL, v1269);
                  if ( Acl >= 0 )
                  {
                    if ( v613 + 3 > (_DWORD *)((char *)v613 + uAugend[0]) )
                    {
                      Acl = -1073741789;
                      goto LABEL_1557;
                    }
                    v614 = (_QWORD *)v1269[0];
                    *v613 = 8;
                    *v614 = v1180;
                    v612 = ++v864;
                  }
                }
                else
                {
                  Acl = -1073741811;
                }
                if ( Acl < 0 )
                  goto LABEL_142;
                v1021 = v965;
                if ( !&v1021 )
                  goto LABEL_1555;
                if ( !*(_QWORD *)&uAugend[1] )
                {
                  v615 = RtlUIntAdd(4u, 4u, &v1120);
                  v616 = v967;
                  Acl = v615;
                  if ( v615 >= 0 )
                    v616 = v1120;
                  v967 = v616;
                  if ( v615 >= 0 )
                  {
                    Acl = RtlUIntAdd(uAugend[0], v616, uAugend);
                    if ( Acl >= 0 )
                    {
                      ++v864;
                      Acl = 0;
                    }
                  }
                  goto LABEL_1557;
                }
                v617 = *(UINT **)&uAugend[1];
                v1041 = *(_QWORD *)&uAugend[1];
                if ( !v612 )
                {
LABEL_1551:
                  Acl = RtlULongLongAdd((ULONGLONG)v617, 4uLL, v1271);
                  if ( Acl >= 0 )
                  {
                    if ( (unsigned __int64)(v623 + 2) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
                    {
                      v624 = (int *)v1271[0];
                      *v623 = v622;
                      *v624 = v1021;
                      ++v864;
                    }
                    else
                    {
                      Acl = -1073741789;
                    }
                  }
                  goto LABEL_1557;
                }
                while ( 1 )
                {
                  v618 = RtlUIntAdd(4u, *v617, &v1070);
                  Acl = v618;
                  if ( v618 >= 0 )
                    v619 = v1070;
                  v967 = v619;
                  if ( v618 < 0 )
                    break;
                  Acl = RtlULongLongAdd(v620, v619, &v1041);
                  if ( Acl < 0 )
                    break;
                  v617 = (UINT *)v1041;
                  if ( v621 + 1 >= v612 )
                    goto LABEL_1551;
                }
              }
            }
          }
        }
      }
LABEL_1557:
      if ( Acl < 0 )
        goto LABEL_142;
      goto LABEL_757;
    case 100:
      Acl = sub_140556E48(v867, v126, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 101:
      Acl = sub_140409614((__int64)v867, (__int64)v126, v125, (__int64)&v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 102:
      Acl = sub_1407001D4(v867, v126, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 103:
      Acl = sub_1406FE610(v867, v126, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 104:
      Acl = sub_140700570(v867, v126, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 105:
      Acl = sub_140005E80((__int64)v867, (__int64)v126, v125, (__int64)&v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 106:
      Acl = sub_1406FF424(v867, v126, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 107:
      Acl = sub_140268E8C((__int64)v867, (__int64)v126, v125, (__int64)&v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 109:
      v1194 = 0LL;
      v1192 = 0LL;
      v919 = 0;
      if ( !v126 )
      {
        Acl = -1073741811;
        v5 = 0LL;
        goto LABEL_2088;
      }
      if ( !v867[1] )
      {
        Acl = -1073741811;
        goto LABEL_1770;
      }
      if ( LODWORD(v867[0]) <= 3 )
      {
        Acl = -1073741811;
        goto LABEL_1770;
      }
      v687 = v867[1];
      v944 = v867[1];
      do
      {
        Acl = RtlULongLongAdd(v687, 4uLL, &v944);
        if ( Acl < 0 )
          goto LABEL_1765;
        Acl = RtlULongLongAdd(v944, v688, &v944);
        if ( Acl < 0 )
          goto LABEL_1765;
        v687 = v944;
      }
      while ( (unsigned int)(v689 + 1) < 3 );
      Acl = RtlULongLongAdd(v944, 4uLL, &v944);
      if ( Acl < 0 )
      {
LABEL_1765:
        v690 = v1082;
        v691 = v1197;
        goto LABEL_1766;
      }
      v691 = (_QWORD *)v944;
      v1082 = v690;
      if ( !v690 )
        v691 = 0LL;
      v1197 = v691;
LABEL_1766:
      if ( Acl < 0 )
        goto LABEL_190;
      if ( v690 != 8 )
      {
        Acl = -1073741789;
        goto LABEL_1928;
      }
      v1238 = *v691;
LABEL_1770:
      if ( Acl < 0 )
        goto LABEL_190;
      if ( v867[1] )
      {
        if ( LODWORD(v867[0]) > 4 )
        {
          v692 = v867[1];
          v946 = v867[1];
          do
          {
            Acl = RtlULongLongAdd(v692, 4uLL, &v946);
            if ( Acl < 0 )
              goto LABEL_1783;
            Acl = RtlULongLongAdd(v946, v693, &v946);
            if ( Acl < 0 )
              goto LABEL_1783;
            v692 = v946;
          }
          while ( (unsigned int)(v694 + 1) < 4 );
          Acl = RtlULongLongAdd(v946, 4uLL, &v946);
          if ( Acl < 0 )
          {
LABEL_1783:
            v695 = v1163;
            v696 = v1230;
            goto LABEL_1784;
          }
          v696 = (_DWORD *)v946;
          v1163 = v695;
          if ( !v695 )
            v696 = 0LL;
          v1230 = v696;
LABEL_1784:
          if ( Acl < 0 )
            goto LABEL_190;
          if ( v695 != 4 )
          {
            Acl = -1073741789;
            goto LABEL_1928;
          }
          v1153 = *v696;
        }
        else
        {
          Acl = -1073741811;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_190;
      if ( v867[1] )
      {
        if ( LODWORD(v867[0]) > 5 )
        {
          v697 = v867[1];
          v948 = v867[1];
          do
          {
            Acl = RtlULongLongAdd(v697, 4uLL, &v948);
            if ( Acl < 0 )
              goto LABEL_1801;
            Acl = RtlULongLongAdd(v948, v698, &v948);
            if ( Acl < 0 )
              goto LABEL_1801;
            v697 = v948;
          }
          while ( (unsigned int)(v699 + 1) < 5 );
          Acl = RtlULongLongAdd(v948, 4uLL, &v948);
          if ( Acl < 0 )
          {
LABEL_1801:
            v700 = v1032;
            v701 = v1190;
            goto LABEL_1802;
          }
          v701 = (const wchar_t *)v948;
          v1032 = v700;
          if ( !v700 )
            v701 = 0LL;
          v1190 = v701;
LABEL_1802:
          if ( Acl < 0 )
            goto LABEL_190;
          if ( !v700 )
          {
            Acl = -1073741762;
            goto LABEL_1820;
          }
          if ( (v700 & 1) != 0 )
          {
            Acl = -1073741762;
            goto LABEL_1820;
          }
          if ( v701[((unsigned __int64)v700 >> 1) - 1] )
          {
            Acl = -1073741762;
            goto LABEL_1820;
          }
          if ( StringCbLengthW(v701, v700, v901) < 0 )
          {
            Acl = -1073741762;
            goto LABEL_1820;
          }
          if ( v901[0] + 2 != v1032 )
          {
            Acl = -1073741762;
            goto LABEL_1820;
          }
          v1234 = (void *)v1190;
          v976 = v901[0] >> 1;
        }
        else
        {
          Acl = -1073741811;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_190;
      v702 = 2 * v976 + 2;
      if ( 2 * v976 == -2 )
      {
        Acl = -1073741762;
      }
      else
      {
        v703 = v702;
        v704 = ExAllocatePoolWithTag(PagedPool, v702, 0x20534C53u);
        v705 = v704;
        if ( v704 )
        {
          Acl = 0;
          memmove(v704, v1234, v703);
          v1214 = v976;
          v1194 = v705;
        }
        else
        {
          Acl = -1073741801;
        }
      }
LABEL_1820:
      if ( Acl < 0 )
        goto LABEL_190;
      if ( !v867[1] || LODWORD(v867[0]) <= 6 )
        goto LABEL_1927;
      v706 = v867[1];
      v950 = v867[1];
      do
      {
        Acl = RtlULongLongAdd(v706, 4uLL, &v950);
        if ( Acl < 0 )
          goto LABEL_1831;
        Acl = RtlULongLongAdd(v950, v707, &v950);
        if ( Acl < 0 )
          goto LABEL_1831;
        v706 = v950;
      }
      while ( (unsigned int)(v708 + 1) < 6 );
      Acl = RtlULongLongAdd(v950, 4uLL, &v950);
      if ( Acl < 0 )
      {
LABEL_1831:
        v709 = v1084;
        goto LABEL_1832;
      }
      v710 = v950;
      v1084 = v709;
      if ( !v709 )
        v710 = 0LL;
      v1192 = v710;
LABEL_1832:
      if ( Acl < 0 )
        goto LABEL_190;
      if ( LODWORD(v867[0]) > 7 )
      {
        v711 = (PVOID)v867[1];
        P = (PVOID)v867[1];
        do
        {
          Acl = RtlULongLongAdd((ULONGLONG)v711, 4uLL, (ULONGLONG *)&P);
          if ( Acl < 0 )
            goto LABEL_1843;
          Acl = RtlULongLongAdd((ULONGLONG)P, v712, (ULONGLONG *)&P);
          if ( Acl < 0 )
            goto LABEL_1843;
          v711 = P;
        }
        while ( (unsigned int)(v713 + 1) < 7 );
        Acl = RtlULongLongAdd((ULONGLONG)P, 4uLL, (ULONGLONG *)&P);
        if ( Acl < 0 )
        {
LABEL_1843:
          v714 = v1128;
          v715 = v1236;
          goto LABEL_1844;
        }
        v715 = P;
        v1128 = v714;
        if ( !v714 )
          v715 = 0LL;
        v1236 = v715;
LABEL_1844:
        if ( Acl < 0 )
          goto LABEL_190;
        if ( v714 != 4 )
        {
          Acl = -1073741789;
          goto LABEL_1928;
        }
        v1086 = *v715;
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_190;
      if ( qword_14077E3A0 )
        v716 = qword_14077E3A0(v1153, v1194, v1192, v709, v1086, &v919);
      else
        v716 = -1073700223;
      v717 = RtlUIntAdd(4u, 4u, &v1088);
      v719 = v1008;
      Acl = v717;
      if ( v717 >= 0 )
        v719 = v1088;
      v1008 = v719;
      if ( v717 >= 0 )
      {
        v891 = v719;
        v720 = RtlUIntAdd(v718, 8u, &v1130);
        v722 = v721;
        Acl = v720;
        if ( v720 >= 0 )
          v722 = v1130;
        v1008 = v722;
        if ( v720 >= 0 )
        {
          v723 = RtlUIntAdd(v721, v722, &v891);
          v724 = v908;
          Acl = v723;
          if ( v723 >= 0 )
            v724 = v891;
          v908 = v724;
        }
      }
      if ( Acl < 0 )
        goto LABEL_190;
      v725 = RtlUIntAdd(4u, 4u, &v1090);
      v727 = v935;
      Acl = v725;
      if ( v725 >= 0 )
        v727 = v1090;
      v935 = v727;
      if ( v725 < 0 )
        goto LABEL_1928;
      Acl = RtlUIntAdd(v726, v727, &v908);
      if ( Acl < 0 )
        goto LABEL_1928;
      v1024 = 8;
      Acl = RtlUIntAdd(8u, v908, &v1024);
      if ( Acl >= 0 )
      {
        v729 = (v1024 + 7) & 0xFFFFFFF8;
        if ( v729 >= v1024 )
        {
          v980 = (v1024 + 7) & 0xFFFFFFF8;
          v731 = RtlUIntAdd(v729, 8u, &v980);
          v730 = v935;
          Acl = v731;
          if ( v731 >= 0 )
            v730 = v980;
        }
        else
        {
          v730 = v935;
          Acl = -1073741675;
        }
        if ( Acl < 0 )
          goto LABEL_190;
        v879 = 4;
        Acl = RtlUIntAdd(4u, v730, &v879);
        if ( Acl >= 0 )
        {
          Acl = RtlUIntAdd(v879, v732, &v879);
          if ( Acl >= 0 )
          {
            Acl = RtlUIntAdd(v879, v126[4], &v879);
            if ( Acl >= 0 )
            {
              Acl = RtlUIntAdd(v879, 4u, &v879);
              if ( Acl >= 0 )
              {
                Acl = RtlUIntAdd(v879, v126[8], &v879);
                v733 = v1092;
                if ( Acl >= 0 )
                  v733 = v879;
                v1092 = v733;
              }
            }
          }
        }
      }
      if ( Acl < 0 )
        goto LABEL_190;
      uAugend[0] = v728;
      if ( !(_DWORD)v728 )
      {
        Acl = -1073741762;
        goto LABEL_1928;
      }
      v734 = ExAllocatePoolWithTag(PagedPool, v728, 0x20534C53u);
      if ( !v734 )
      {
        Acl = -1073741801;
        goto LABEL_1928;
      }
      *(_QWORD *)&uAugend[1] = v734;
      v735 = 0;
      v864 = 0;
      v1010 = v716 | 0x10000000;
      if ( &v1010 )
      {
        Acl = RtlULongLongAdd((ULONGLONG)v734, 4uLL, &v1281);
        if ( Acl >= 0 )
        {
          if ( v737 + 2 > (_DWORD *)((char *)v737 + uAugend[0]) )
          {
            Acl = -1073741789;
            goto LABEL_1928;
          }
          v738 = (_DWORD *)v1281;
          *v737 = v736;
          *v738 = v1010;
          v735 = ++v864;
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_190;
      v1196 = v1238;
      if ( &v1196 )
      {
        if ( *(_QWORD *)&uAugend[1] )
        {
          v742 = *(UINT **)&uAugend[1];
          v743 = 0;
          i = *(_QWORD *)&uAugend[1];
          if ( v735 )
          {
            while ( 1 )
            {
              v744 = RtlUIntAdd(4u, *v742, &v1094);
              Acl = v744;
              if ( v744 >= 0 )
                v745 = v1094;
              v917 = v745;
              if ( v744 < 0 )
                break;
              Acl = RtlULongLongAdd(v746, v745, &i);
              if ( Acl < 0 )
                break;
              v742 = (UINT *)i;
              if ( ++v743 >= v735 )
                goto LABEL_1904;
            }
          }
          else
          {
LABEL_1904:
            Acl = RtlULongLongAdd((ULONGLONG)v742, 4uLL, v1283);
            if ( Acl >= 0 )
            {
              if ( (unsigned __int64)(v747 + 3) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
              {
                Acl = -1073741789;
                goto LABEL_1928;
              }
              v748 = (_QWORD *)v1283[0];
              *v747 = 8;
              *v748 = v1196;
              v735 = ++v864;
            }
          }
        }
        else
        {
          v739 = RtlUIntAdd(4u, 8u, &v1132);
          v740 = v917;
          Acl = v739;
          if ( v739 >= 0 )
            v740 = v1132;
          v917 = v740;
          if ( v739 >= 0 )
          {
            v741 = RtlUIntAdd(uAugend[0], v740, uAugend);
            v735 = v864;
            Acl = v741;
            if ( v741 >= 0 )
            {
              v735 = ++v864;
              goto LABEL_1910;
            }
          }
        }
      }
      else
      {
        Acl = -1073741811;
      }
      if ( Acl < 0 )
        goto LABEL_190;
LABEL_1910:
      if ( &v919 )
      {
        if ( *(_QWORD *)&uAugend[1] )
        {
          v751 = *(UINT **)&uAugend[1];
          v752 = 0;
          Src = *(void **)&uAugend[1];
          if ( v735 )
          {
            while ( 1 )
            {
              v753 = RtlUIntAdd(4u, *v751, &v1096);
              Acl = v753;
              if ( v753 >= 0 )
                v754 = v1096;
              v914 = v754;
              if ( v753 < 0 )
                break;
              Acl = RtlULongLongAdd(v755, v754, (ULONGLONG *)&Src);
              if ( Acl < 0 )
                break;
              v751 = (UINT *)Src;
              if ( ++v752 >= v756 )
                goto LABEL_1923;
            }
          }
          else
          {
LABEL_1923:
            Acl = RtlULongLongAdd((ULONGLONG)v751, 4uLL, v1284);
            if ( Acl >= 0 )
            {
              if ( (unsigned __int64)(v758 + 2) <= *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
              {
                v759 = (_DWORD *)v1284[0];
                *v758 = v757;
                *v759 = v919;
                ++v864;
              }
              else
              {
                Acl = -1073741789;
              }
            }
          }
        }
        else
        {
          v749 = RtlUIntAdd(4u, 4u, &v1155);
          v750 = v914;
          Acl = v749;
          if ( v749 >= 0 )
            v750 = v1155;
          v914 = v750;
          if ( v749 >= 0 )
          {
            Acl = RtlUIntAdd(uAugend[0], v750, uAugend);
            if ( Acl >= 0 )
            {
              ++v864;
              Acl = 0;
            }
          }
        }
      }
      else
      {
LABEL_1927:
        Acl = -1073741811;
      }
LABEL_1928:
      if ( Acl < 0 )
        goto LABEL_190;
      goto LABEL_757;
    case 110:
      Acl = sub_1406FEC28(v867, v126, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 111:
      Acl = sub_1406FE398(v867, v126, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 112:
      Acl = sub_140409274((__int64)v867, (__int64)v126, v125, (__int64)&v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 113:
      Acl = sub_140408690((__int64)v867, (__int64)v126, v125, (__int64)&v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 201:
      Acl = sub_140700DB4(v867, v126, v125, &v864);
      if ( Acl < 0 )
        goto LABEL_1957;
      goto LABEL_757;
    case 202:
      Acl = sub_140511984((__int64)v867, 0x140000000LL, v125, (__int64)&v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 203:
      Acl = sub_1406FFF04(v867, v126, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 204:
      Acl = sub_140701190(v867, v126, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 205:
      Acl = sub_140544F58(v867, v126, v125, &v864);
      if ( Acl >= 0 )
        goto LABEL_757;
      goto LABEL_1957;
    case 206:
      v1188[0] = 8;
      v1040 = 0;
      v1188[1] = 0;
      Acl = 0;
      ZwQuerySystemInformation(SystemCodeIntegrityInformation, v1188, 8u, &v1040);
      if ( *((_DWORD *)v872 + 4) != 160
        || (memcmp(qword_140724EF0, *((const void **)v872 + 3), 0xA0uLL)
         || v126[4] != 160
         || memcmp(qword_1407253F0, *((const void **)v126 + 3), 0xA0uLL)
         || *((_DWORD *)v872 + 8) != 8
         || **((_QWORD **)v872 + 5) != 0x5638EBB72F3355A5LL
         || v126[8] != 8
         || **((_QWORD **)v126 + 5) != 0x9F2DD8784FE939B7uLL)
        && (memcmp(qword_140725210, *((const void **)v872 + 3), 0xA0uLL)
         || v126[4] != 160
         || memcmp(qword_140725350, *((const void **)v126 + 3), 0xA0uLL)
         || *((_DWORD *)v872 + 8) != 8
         || **((_QWORD **)v872 + 5) != 0xF10D668DB2BB8BB9uLL
         || v126[8] != 8
         || **((_QWORD **)v126 + 5) != 0x768DFD321621EA95LL) )
      {
        Acl = -2147024891;
      }
      if ( Acl >= 0 )
      {
        Acl = sub_1400059D8((__int64)v867, (__int64)v126, v686, (__int64)&v864);
        if ( Acl >= 0 )
          goto LABEL_757;
      }
      goto LABEL_1957;
    default:
      v982 = -2147467263;
      if ( !&v982 )
      {
        Acl = -1073741811;
        goto LABEL_1975;
      }
      if ( *(_QWORD *)&uAugend[1] )
      {
        v762 = *(UINT **)&uAugend[1];
        v883 = *(_QWORD *)&uAugend[1];
        if ( v864 )
        {
          do
          {
            v763 = RtlUIntAdd(4u, *v762, &v970);
            Acl = v763;
            if ( v763 >= 0 )
              v764 = v970;
            v968 = v764;
            if ( v763 < 0 )
              goto LABEL_1975;
            Acl = RtlULongLongAdd(v765, v764, &v883);
            if ( Acl < 0 )
              goto LABEL_1975;
            v762 = (UINT *)v883;
          }
          while ( v766 + 1 < v864 );
        }
        Acl = RtlULongLongAdd((ULONGLONG)v762, 4uLL, &v1286);
        if ( Acl >= 0 )
        {
          if ( (unsigned __int64)(v768 + 2) > *(_QWORD *)&uAugend[1] + (unsigned __int64)uAugend[0] )
            goto LABEL_1556;
          v769 = (_DWORD *)v1286;
          *v768 = v767;
          *v769 = v982;
          ++v864;
        }
      }
      else
      {
        v760 = RtlUIntAdd(4u, 4u, &v1135);
        v761 = v968;
        Acl = v760;
        if ( v760 >= 0 )
          v761 = v1135;
        v968 = v761;
        if ( v760 >= 0 )
        {
          Acl = RtlUIntAdd(uAugend[0], v761, uAugend);
          if ( Acl >= 0 )
          {
            ++v864;
            goto LABEL_1976;
          }
        }
      }
LABEL_1975:
      if ( Acl < 0 )
        goto LABEL_1557;
LABEL_1976:
      if ( uAugend[0] )
      {
        v770 = ExAllocatePoolWithTag(PagedPool, uAugend[0], 0x20534C53u);
        if ( v770 )
        {
          *(_QWORD *)&uAugend[1] = v770;
          v864 = 0;
          v1030 = -2147467263;
          if ( &v1030 )
          {
            Acl = RtlULongLongAdd((ULONGLONG)v770, 4uLL, v1252);
            if ( Acl >= 0 )
            {
              if ( v772 + 2 <= (_DWORD *)((char *)v772 + uAugend[0]) )
              {
                v773 = (int *)v1252[0];
                *v772 = v771;
                *v773 = v1030;
                ++v864;
              }
              else
              {
                Acl = -1073741789;
              }
            }
          }
          else
          {
LABEL_1555:
            Acl = -1073741811;
          }
        }
        else
        {
          Acl = -1073741801;
        }
      }
      else
      {
        Acl = -1073741762;
      }
      goto LABEL_1557;
  }
}
